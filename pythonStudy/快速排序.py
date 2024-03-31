def partition(arr,low,high):
    i=(low-1) #最小元素索引
    pivot=arr[high] #以列表的最后一个元素为基准

    for j in range(low,high):
        if arr[j]<=pivot:
            i+=1
            arr[i],arr[j]=arr[j],arr[i]
    arr[i+1],arr[high]=arr[high],arr[i+1]
    return i+1
#arr[] 排序数列
#low 起始索引
#high 结束索引
def quickSort(arr,low,high):
    if low < high:
        pi=partition(arr,low,high)

        quickSort(arr,low,pi-1)
        quickSort(arr,pi+1,high)
arr=[10,7,8,9,1,5]
n=len(arr)
quickSort(arr,0,n-1)
print("排序后的数组:")
print(arr)


# def quickSort(arr):
#     len_ = len(arr)
#     if len_ <= 1:
#         return
#     pivot = arr[len_//2]    # 基准数为中间元素,中间元素位置空出来,一定要用中间元素为基准,
#                             # 若取第一或末尾,对排好顺序的序列,时间复杂度会变成指数O(n^2)
#     arr[len_//2] = arr[0]  # 中间空位放入第一个元素,此时第一元素的位置空出来
#     left = 0  # 左边界(边界之外是已经处理好的元素,边界之内是未处理的元素)
#     right = len_-1  # 右边界
#     # 当左侧有空位时,从最右侧找出小于基准的元素放入空位,当右侧有空位时,从左侧找出大于基准的
#     is_cell_left = True  # 空位在左侧
#     while (left < right):
#         if is_cell_left:  # 空位在左侧
#             if(arr[right] >= pivot):  # 如果右侧元素>=基准
#                 right -= 1  # 右边界缩小
#             else:
#                 arr[left] = arr[right]  # 右侧元素放入空位
#                 left += 1
#                 is_cell_left = False  # 空位在右侧
#         else:  # 空位在右侧
#             if(arr[left] <= pivot):  # 如果左侧元素>=基准
#                 left += 1  # 左边界缩小
#             else:
#                 arr[right] = arr[left]  # 左侧元素放入空位
#                 right -= 1
#                 is_cell_left = True  # 空位在左侧
#     arr[left] = pivot
#     quickSort(arr[:left])
#     quickSort(arr[left+1:])