//单链表输入一行字符，直到达到文件的结尾（EOF，End of File）。建立一个先进先出单链表，链表的每个结点含有输入的一个字符。
//遍历输出该链表中所有字符
//将该链表中所有字符无冗余地存放到一个通过动态存储分配创建的字符数组中，并且输出该字符数组的长度以及该字符数组的内容。
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// struct input{ 
// char get; //获取一个字符
// struct input *next; //声明结构
//  };
//  int main(void)
//  {
//      struct input *head; //头指针
//      struct input *prev,*current; //保存用指针以及指向当前链的指针
//      char ch; //获取字符
//      int num=0; //计算字符数
//      while((ch=getchar())!='\n')
//      {
//              num++;
//          current =(struct input *)malloc(sizeof(struct input)); //为某一项创建空间
//          if(head==NULL) //如果是最后一项就将next设置为null，如果不是，就设置新的next
//              head=current;                    
//          else prev->next=current;
//          current->get=ch;
//          prev=current;
//      }
//      if(head==NULL)
//          ; 
//      current=head;
//      while(current!=NULL)
//      {
//          printf("%c",current->get); //依次输出同时指向下一环
//          current=current->next;
//      }
//      printf("\n%d\n",num);    
//      current=head; //从头开始
//      char *shuzu;
//      shuzu=(char *)malloc(num*sizeof(char)); //分配相应大小的空间
//      for(int i=0;i<num;i++)
//      {
//          shuzu[i]=current->get; //数组的指针表示法
//          current=current->next; //依次实现赋值，指向下一环，输出，只用了一个循环
//          printf("%c",shuzu[i]);
//      }
//      return 0;
// //  }
#include <stdio.h>
#include <stdlib.h>

// 定义链表结构
struct Node 
{
    char data;
    struct Node* next;
};

// 插入字符到链表尾部
struct Node* insertNode(struct Node* head, char data)
 {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) 
    {
        head = newNode;
    } 
    else 
    {
        struct Node* temp = head;
        while (temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

// 遍历并输出链表中的字符
void DaYingLianBiao(struct Node* head) 
{
    struct Node* temp = head;
    while (temp != NULL) 
    {
        printf("%c", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() 
{
    struct Node* head = NULL; //定义一个头指针
    char ch;

    while ((ch = getchar()) != EOF) 
    {
        head = insertNode(head, ch);
    }

    DaYingLianBiao(head);

    // 将链表中的字符存入数组
    int ChangDu = 0;
    struct Node* temp = head;
    while (temp != NULL) {
        ChangDu++;
        temp = temp->next;
    }
    // 创建字符数组
    char* charArray = (char*)malloc((ChangDu + 1) * sizeof(char)); // 需要额外一个位置存放字符串结束符 '\0'
    int index = 0;
    temp = head;
    while (temp != NULL) {
        charArray[index++] = temp->data;
        temp = temp->next;
    }
    charArray[index] = '\0'; // 添加字符串结束符
    printf("%d\n", ChangDu);
    printf("%s", charArray);
    
    return 0;
}
