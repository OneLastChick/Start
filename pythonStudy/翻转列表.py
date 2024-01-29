def Reverse(lst):
    return [ele for ele in reversed(lst)]
lst=[10,11,12,13,14,15]
print(Reverse(lst))

def Reverse2(lst): 
    lst.reverse() 
    return lst 
 
lst = [10, 11, 12, 13, 14, 15] 

newlist=lst[::-1]
print(newlist)
