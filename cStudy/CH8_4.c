#include <stdio.h>
void swap(int* x,int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void ChoiceResort(int *array,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(*(array+j)<*(array+min))
            {
                min=j;
            }
        }
        swap((array+min),(array+i));
    }
}
int main()
{
    int num=0;
    scanf("%d",&num);
    int array[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }
    ChoiceResort(array,num);
    for(int j=0;j<num;j++)
    {
        printf("%d",array[j]);
        if(j<num-1)
        {
            printf(" ");
        }
    }
}
// #include <stdio.h>

// // Function to swap values pointed by pointers x and y
// void swap(int* x, int* y) {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// // Function implementing Selection Sort algorithm
// void ChoiceResort(int* array, int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int min = i;
//         // Find the index of the minimum element in the unsorted part
//         for (int j = i + 1; j < n; j++) {
//             if (*(array + j) < *(array + min)) {
//                 min = j;
//             }
//         }
//         // Swap the found minimum element with the first element
//         swap((array + min), (array + i));
//     }
// }

// int main() {
//     int num = 0;
//     // Input the number of elements in the array
//     scanf("%d", &num);
//     int array[num];
//     // Input array elements
//     for (int i = 0; i < num; i++) {
//         scanf("%d", &array[i]);
//     }
//     // Sort the array using Selection Sort algorithm
//     ChoiceResort(array, num);
//     // Display sorted array
//     for (int j = 0; j < num; j++) {
//         printf("%-2d", array[j]);
//         if(j<num-1)
//         {
//             printf(" ");
//         }
//     }
//     return 0;
// }
