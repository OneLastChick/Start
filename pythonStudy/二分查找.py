#二分查找如果不存在返回-1
def binarySearch(arr,l,r,x):
    if r >= l :
        mid = int (l+(r-l)/2)
        
        #元素正好的中间位置
        if arr[mid] == x:
            return mid
        elif arr[mid] > x:
            return binarySearch(arr,l,mid-1,x)
        else:
            return binarySearch(arr,mid+1,r,x)

    else :
        return -1 #不存在
    

arr=[2,3,4,10,40]
x=10

result=binarySearch(arr,0,len(arr)-1,x)
    
if result != -1:
    print("元素在数组中的索引为%d" %result)
else:
    print("不存在")

        