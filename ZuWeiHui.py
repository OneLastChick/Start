import requests
import response
import json
import re
import time
import math
def delete_message(message_id):
    url = 'http://202.38.93.111:10021/api/deleteMessage'
    headers = {
        'Content-Type':'application/json',
        'Cookie':'_ga_R1FN4KJKJH=GS1.1.1698551519.1.1.1698551534.0.0.0; _ga=GA1.1.71891944.1698551519; session=eyJ0b2tlbiI6IjE2OTE6TUVVQ0lRRHltTjVPc2RhTElMTWd2RFFpM0ZWY200d1o2cXRLMzRwdmx5NGt3dTBaS3dJZ0ZsUFZZcnRsdjZIZDZ2Smd1UWUxM2daTHhoaDhDZWl6VXpsME83UUFCdFk9In0.ZUJf1Q.FQ7DjlYMdYh0YnYkV5gUFkjDwlY'
    }
    data = {
        'id':message_id
    }
    response = requests.post(url,headers=headers,json=data)
    if response.status_code == 200:
        print(response.text)
        if 'error' in response.text:
            return False
        return True
    else:
        print(f"Failed to delete message {message_id}.Error code:{response.status_code}")
        return False
def check_token():
    url = 'http://202.38.93.111:10021/api/checkToken'
    headers = {
        'Content-Type':'application/json',
        'Cookie': '_ga_R1FN4KJKJH=GS1.1.1698551519.1.1.1698551534.0.0.0; _ga=GA1.1.71891944.1698551519; session=eyJ0b2tlbiI6IjE2OTE6TUVVQ0lRRHltTjVPc2RhTElMTWd2RFFpM0ZWY200d1o2cXRLMzRwdmx5NGt3dTBaS3dJZ0ZsUFZZcnRsdjZIZDZ2Smd1UWUxM2daTHhoaDhDZWl6VXpsME83UUFCdFk9In0.ZUJf1Q.FQ7DjlYMdYh0YnYkV5gUFkjDwlY'
    }
    response=requests.get(url,headers=headers)
def get_message():
    url = 'http://202.38.93.111:10021/api/getMessages'
    headers = {
        'Content-Type':'application/json',
        'Cookie': '_ga_R1FN4KJKJH=GS1.1.1698551519.1.1.1698551534.0.0.0; _ga=GA1.1.71891944.1698551519; session=eyJ0b2tlbiI6IjE2OTE6TUVVQ0lRRHltTjVPc2RhTElMTWd2RFFpM0ZWY200d1o2cXRLMzRwdmx5NGt3dTBaS3dJZ0ZsUFZZcnRsdjZIZDZ2Smd1UWUxM2daTHhoaDhDZWl6VXpsME83UUFCdFk9In0.ZUJf1Q.FQ7DjlYMdYh0YnYkV5gUFkjDwlY'
    }
    response = requests.post(url,headers=headers)
    print(response.content)
    text = response.content
    pattern1 = r'"text":"(.*?)"'
    pattern2 = r'"delay":(.*?),"'
    matches1 = re.findall(pattern1,text.decode())
    matches2 = re.findall(pattern2,text.decode())
    prev_match2 = 0
    for i,(match1,match2) in enumerate(zip(matches1,matches2)):
        if i>0:
            time.sleep(int((float(match2)-float(prev_match2))*10)/10)
            if "flag" in match1:
                print(f"{match2}")
                delete_message(i)
            prev_match2 = match2
    print(f"{i}.{match1}")
def getflag():
    url = 'http://202.38.93.111:10021/api/getflag'
    headers = {
        'Content-Type':'application/json',
        'Cookie':'_ga_R1FN4KJKJH=GS1.1.1698551519.1.1.1698551534.0.0.0; _ga=GA1.1.71891944.1698551519; session=eyJ0b2tlbiI6IjE2OTE6TUVVQ0lRRHltTjVPc2RhTElMTWd2RFFpM0ZWY200d1o2cXRLMzRwdmx5NGt3dTBaS3dJZ0ZsUFZZcnRsdjZIZDZ2Smd1UWUxM2daTHhoaDhDZWl6VXpsME83UUFCdFk9In0.ZUJf1Q.FQ7DjlYMdYh0YnYkV5gUFkjDwlY'
    }
    response = requests.post(url,headers=headers)
    if response.status_code == 200:
        print(response.text)
        if 'error' in response.text:
            return False
        return True
    else:
        print(f"Failed to getflag.Error code:{response.status_code}")
        return False

check_token()
get_message()
getflag()
    