#字符数组是计数排序的一种常用方式
def countSort(arr):
    output = [0 for i in range(256)]
    
    count = [0 for i in range(256)]
    ans = ["" for _ in arr]
    
    for i in arr:
        count[ord(i)]+=1

    
    for i in range(1,256):
        count[i]+=count[i-1]
    
    for i in range(len(arr)):
        output[count[ord(arr[i])]-1]=arr[i]
        count[ord(arr[i])]-=1 #每打印一次，计数减一，索引向前一位

    for i in range(len(arr)):
        ans[i]=output[i]
    return ans

arr="www.runoob.com"
ans=countSort(arr)
print("字符数组排序%s"%("".join(ans)))