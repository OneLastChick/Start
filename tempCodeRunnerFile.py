 def get_message():
#     url = 'http://202.38.93.111:10021/api/getMessages'
#     headers = {
#         'Content-Type':'application/json',
#         'Cookie': '_ga_R1FN4KJKJH=GS1.1.1698551519.1.1.1698551534.0.0.0; _ga=GA1.1.71891944.1698551519; session=eyJ0b2tlbiI6IjE2OTE6TUVVQ0lRRHltTjVPc2RhTElMTWd2RFFpM0ZWY200d1o2cXRLMzRwdmx5NGt3dTBaS3dJZ0ZsUFZZcnRsdjZIZDZ2Smd1UWUxM2daTHhoaDhDZWl6VXpsME83UUFCdFk9In0.ZUJf1Q.FQ7DjlYMdYh0YnYkV5gUFkjDwlY'
#     }
#     response = requests.post(url,headers=headers)
#     print(response.content)
#     text = json.loads(response.content)
#     for i,message in enumerate(text["messages"]):
#         if "flag" in message["text"]:
#             flag=0
#             while(flag==False):
#                 print(i)
#                 time.sleep(0.5)
#                 flag=delete_message(i)