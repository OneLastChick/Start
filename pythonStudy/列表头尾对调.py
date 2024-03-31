def swaplist(list):
    n=len(list)
    list[0],list[n-1]=list[n-1],list[0]
    return list

list=[1,2,3]
print(swaplist(list))
