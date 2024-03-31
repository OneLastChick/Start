# def dictionary():
#     key_value={}
#     key_value[2]=56
#     key_value[1]=2
#     key_value[5]=12
#     key_value[4]=24
#     key_value[6]=18
#     key_value[3]=323

#     print("按键(key)排序:")
    
#     for i in sorted(key_value):
#         print((i,key_value[i]),end=' ')
# def main():
#     dictionary()
# if __name__ == "__main__":
#     main()
def dictionairy():  
 
    # 声明字典
    key_value ={}     
 
    # 初始化
    key_value[2] = 56       
    key_value[1] = 2 
    key_value[5] = 12 
    key_value[4] = 24
    key_value[6] = 18      
    key_value[3] = 323 
    print("按value排序:")
    print(sorted(key_value.items(),key=lambda kv:(kv[1],[0])))

#字典列表排序
lis = [{ "name" : "Taobao", "age" : 100},  
{ "name" : "Runoob", "age" : 7 }, 
{ "name" : "Google", "age" : 100 }, 
{ "name" : "Wiki" , "age" : 200 }] 
print("列表通过age升序排列")
print(sorted(lis,key=lambda i : i['age']))

#先按age排序，再按name排序
print("列表通过age和name排序:")
print(sorted(lis,key=lambda i : (i['age'],i['name'])))
