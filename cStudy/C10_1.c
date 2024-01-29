#include <stdio.h>
#include <omp.h>
int main()
{
    int i;
    omp_set_num_threads(4);
    #pragma omp parallel for
        for(i=0;i<10;i++)
        {
            printf("Hello,World(%d)from machine%d!\n",i,omp_get_thread_num());
    
        }
    return 0;
}
