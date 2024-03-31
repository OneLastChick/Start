import requests
import response
import json
import time

def delete_message(message_id):
    url = 'http://202.38.93.111:10021/api/deleteMessage'
    headers = {
    }
    data = {
        'id':message_id
    }
    response = requests.post(url,headers=headers,json=data)
    if response.status_code == 200:
        if 'error' in response.text:
            return False
        else:
            print("Success")
            return True
    else:
        print(f"Failed to delete message {message_id}.Error code:{response.status_code}")
        return False
def check_token():
    url = 'http://202.38.93.111:10021/api/checkToken'
    headers = {
    }
    response=requests.get(url,headers=headers)
def get_message():
    url = 'http://202.38.93.111:10021/api/getMessages'
    headers = {
    }
    response = requests.post(url,headers=headers)
    print(response.content)
    text = json.loads(response.content)
    for i,message in enumerate(text["messages"]):
        if "flag" in message["text"]:
            flag=0
            while(flag==False):
                print(i)
                time.sleep(0.1)
                flag=delete_message(i)

def getflag():
    url = 'http://202.38.93.111:10021/api/getflag'
    headers = {
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
    