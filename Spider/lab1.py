import requests
import logging  # 输出信息，错误日志，便于debug的一个库
import re
from urllib.parse import urljoin

logging.basicConfig(level=logging.INFO, format='%(asctime)s-%(levelname)s:%(message)s')
# 定义日志输出级别以及格式
BASE_URL = "https://ssr1.scrape.center"  # 以此为基URL进行拓展目标url
TOTAL_PAGE = 10


# 定义一个爬取网页源码的函数
def scrape_page(url):
    logging.info("Scraping%s...", url)
    # 错误处理逻辑:1.首先判断状态码是否为200，如果不是输出错误日志信息 2.此外，如果request请求出现异常,输出错误日志
    try:
        response = requests.get(url)
        if response.status_code == 200:
            return response.text
        logging.error('get invalid status code %s while scraping %s', response.status_code, url)
    except requests.RequestException:
        logging.error('error occurred while scraping %s', url, exc_info=True)  # exc_info打印Traceback的错误堆栈信息


# 定义一个解析列表页的函数
def parse_index(html):
    pattern = re.compile('<a.*?href="(.*?)".*?class="name">')  # 提取href属性的正则表达式
    items = re.findall(pattern, html)
    if not items:
        return []
    for item in items:
        detail_url = urljoin(BASE_URL, item)
        logging.info('get detail url %s', detail_url)
        yield detail_url
        # 调用yield返回完整url


# 定义一个列表页的爬取方式
def scrape_index(page):
    index_url = f'{BASE_URL}/page/{page}'
    return scrape_page(index_url)


# 定义一个详情页的爬取方式
def scrape_detail(url):
    return scrape_page(url)


# 到此步已经获取了所有详情网页的url，现在就该爬取url内容
def parse_detail(html):
    # 匹配图片
    cover_pattern = re.compile('class="item.*?<img.*?src="(.*?)".*?class="cover">', re.S)
    # 匹配名称
    name_pattern = re.compile('<h2.*?>(.*?)</h2>')
    # 匹配类型
    categories_pattern = re.compile('<button.*?category<span>(.*?)</span>', re.S)
    # 匹配上映时间
    published_at_pattern = re.compile('(\d{4}-\d{2}-\d{2}\s?上映)', re.S)
    # 匹配剧情简介
    drama_pattern = re.compile('<div.*?drama.*?>.*?<p.*?>(.*?)</p>', re.S)
    # 匹配评分
    score_pattern = re.compile('<p.*?score.*?>(.*?)</p>', re.S)
    cover = re.search(cover_pattern, html).group(1).strip() if re.search(cover_pattern, html) else None
    name = re.search(name_pattern, html).group(1).strip() if re.search(name_pattern, html) else None
    categories = re.findall(categories_pattern, html) if re.search(categories_pattern, html) else []
    published_at = re.search(published_at_pattern, html).group(1).strip() if re.search(published_at_pattern,
                                                                                       html) else None
    drama = re.search(drama_pattern, html).group(1).strip() if re.search(drama_pattern, html) else None
    score = float(re.search(score_pattern, html).group(1).strip()) if re.search(score_pattern, html) else None
    return {
        'cover': cover,
        'name': name,
        'categories': categories,
        'published_at': published_at,
        'drama': drama,
        'score': score
    }


# 定义
# main
# 此步已经提取了每部电影的基本信息
# 最后一步就是保存数据
import json
from os import makedirs
from os.path import exists

RESULT_DIR = 'results'
exists(RESULT_DIR) or makedirs(RESULT_DIR)


def save_data(data):
    name = data.get('name')
    data_path = f'{RESULT_DIR}/{name}.json'
    json.dump(data, open(data_path, "w", encoding='utf8'), ensure_ascii=False,
              indent=2)  # indent=2代表json数据格式缩进2格，更美观，ensure_ascii:可以显示中文


# for page in range(1,TOTAL_PAGE+1):
#     index_html=scrape_index(page)
#     detail_urls=parse_index(index_html)#获取生成器对象detail_url
#     for detai_url in detail_urls:
#         detai_url_html=scrape_detail(detai_url)
#         data=parse_detail(detai_url_html)
#         logging.info('get detail data%s',data)
#         logging.info('saveing data to json file')
#         save_data(data)
#         logging.info('data saved successfully')
import multiprocessing


def main(page):
    index_html = scrape_index(page)
    detail_urls = parse_index(index_html)  # 获取生成器对象detail_url
    for detai_url in detail_urls:
        detai_url_html = scrape_detail(detai_url)
        data = parse_detail(detai_url_html)
        logging.info('get detail data%s', data)
        logging.info('saveing data to json file')
        save_data(data)
        logging.info('data saved successfully')


if __name__ == '__main__':
    pool = multiprocessing.Pool()  # 声明一个进程池
    pages = range(1, TOTAL_PAGE + 1)
    pool.map(main, pages)  # 分别把这10个页码传给这10个函数，进程池根据当前运行环境决定运行多少个进程
    pool.close()
    pool.join()
