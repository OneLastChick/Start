# 选择排序（Selection sort）是一种简单直观的排序算法。它的工作原理如下。首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置，然后，再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。以此类推，直到所有元素均排序完毕。
import sys
A=[64,25,12,22,11]

for i in range(len(A)):
    min_idx=i
    for j in range(i+1,len(A)):
        if(A[min_idx]>A[j]):
            min_idx=j
    A[min_idx],A[i]=A[i],A[min_idx]

print(A)
