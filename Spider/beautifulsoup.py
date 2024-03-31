import requests
from bs4 import BeautifulSoup
#这是beautifulSoup的基本使用
url="http://quotes.toscrape.com/"
html=requests.get(url).text
soup=BeautifulSoup(html,'lxml')#对html源码初始化一个bs对象
print(soup.prettify()) #以标准缩进显示
print(soup.title) #打印title节点的选择结果
print(soup.title.string)#打印title节点的文本内容
print(type(soup))#这是bs4.element.Tag 类型
print(soup.p)#结果是第一个p节点的内容
print(soup.head)#结果是head节点的所有内容
#获取节点的信息
print(soup.p.attrs) #调用attrs获取p的所有属性
print(soup.p.string)#获取p节点的文本
print(soup.p.contents)#获取p的直接子节点
