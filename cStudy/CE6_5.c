// #include<stdio.h>
// int main()
// {
// 	int m,n;
// 	scanf("%d%d",&m,&n);
// 	int dir;
// 	dir=2;
// 	int a[100][100];
// 	int i,j;
// 	for(int i = 0 ;i<m;i++)
// 	{
// 		for(int j=0;j<n;j++)
// 		scanf("%d ",&a[i][j]);
// 	}
// 	i=0;
// 	j=0;
// 	while(!(i==m-1&&j==n-1))
// 	{
		
		
			
// 		if(0<=i&&i<m&&0<=j&&j<n)
// 		printf("%d ",*(*(a+i)+j));
// 		switch(dir)
// 		{
// 		case 1: i++;
// 		j--;break;
// 		case 2: i--;
// 		j++;break; 
// 	}
//     if(i<0)
// 		{
// 			i=0;
// 			dir=1;
// 		}
// 		if(j<0)
// 		{
// 			j=0;
// 	    	dir=2;
// 	}
//     }
//     printf("%d",*(*(a+m-1)+n-1));

// }
#include <stdio.h>
void scanarrayz(int m,int n,int _2D_Array[m][n])
{
    int row=0,col=0;  //row+col
    int dir=2;
    while(row!=m-1||col!=n-1)
    {
        if(row>=0&&row<m&&col>=0&&col<n){
        printf("%d ",*(*(_2D_Array+row)+col));
        }
        switch(dir)
        {
            case 1:
            row++;col--;
            break;
            case 2:
            row--;col++;
            break;
        }
        if(row<0)
        {
            row=0;
            dir=1;
        }
        if(col<0)
        {
            col=0;
            dir=2;
        }         
    }
    printf("%d",*(*(_2D_Array+m-1)+n-1));
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int _2D_Array[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&_2D_Array[i][j]);
        }
    }
    scanarrayz(m,n,_2D_Array);
}