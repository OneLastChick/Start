from lxml import etree
import requests

text = requests.get('http://quotes.toscrape.com').text
html = etree.HTML(text)
results=etree.tostring(html)
result1=html.xpath('//*')
print(result1)
print(result1[0])
