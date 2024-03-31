import requests
import re
# r=requests.get('https://ssr1.scrape.center/')
# pattern=re.compile('<h2.*?>(.*?)</h2>',re.S)
# titles=re.findall(pattern,r.text)
# print(titles)
# r=requests.get('https://scrape.center/favicon.ico')
# print(r.text)
# print(r.content)
#search实例
import re
str='ab12cd34ef567'
info=re.compile(r'([0-9]{2})')#[0-9]{2}表示0-9的任意数字匹配2次，()代表作为一组返回
result=info.search(str).group()
result1=info.search(str).groups()
result2=info.search(str).groups()
print(result)
print(result1)
print(result2)


