#include <stdio.h>
// int main()
// {
//     char c;
//     scanf("%c",&c);
//     if((c>='0'&&c<='9')||(c>='a'&&c<='f')||(c>='A'&&c<='F'))
//     {
//         int s;
//         if(c>='0'&&c<='9')
//             s=c-'0';
           
//         else if(c>='a'&&c<='f') 
//             s=c-'a'+10;
//         else if(c>='A'&&c<='F') 
//             s=c-'A'+10;
//             printf("%d",s);
//     }
//     else
//     {
//         printf("%d",c);
//     }
//     return 0;
// }
// // #include <stdio.h>
// // int main()
// // {
// //     char c;
// //     while((c=getchar())!=EOF)
// //     {
// //         if()
// //     }
// //     return 0;
// // }
// #include <stdio.h>
// int main()
// {
//     char c;
//     while((c=getchar())!=EOF)
//         {
//             if(c>='0'&&c<='9')
//                 printf("%d",c-'0');
//             else if(c>='a'&&c<='f')
//                 printf("%d",c-'a'+10);
//             else if(c>='A'&&c<='F')
//                 printf("%d",c-'A'+10);
//             else
//                 putchar(c);
//         }
//     return 0;
// }

// int main() {
//     char c;
//     while ((c = getchar()) != EOF) {
//         if (c >= '0' && c <= '9') {
//             printf("%d", c - '0');
//         } else if (c >= 'a' && c <= 'f') {
//             printf("%d", c - 'a' + 10);
//         } else if (c >= 'A' && c <= 'F') {
//             printf("%d", c - 'A' + 10);
//         } else {
//             putchar(c);
//         }
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if (c >= '0' && c <= '9') {
            printf("%d", c - '0');
        } else if (c >= 'a' && c <= 'f') {
            printf("%d", c - 'a' + 10);
        } else if (c >= 'A' && c <= 'F') {
            printf("%d", c - 'A' + 10);
        } else {
            printf("%c",c); 
        }
    return 0;
}