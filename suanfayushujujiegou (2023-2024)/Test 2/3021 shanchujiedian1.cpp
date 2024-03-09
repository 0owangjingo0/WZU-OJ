#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node{
	ElementType data;
	struct Node  *next;
}Node, *LinkList;

int delNode(LinkList L, ElementType x);

int main()
{
    /*此处代码由测试程序自动添加，主要为了向顺序表中插入数据
	并输出数据,你无需关心此处代码的具体实现细节。
	如果有必要，请自己添加代码以测试你的函数是否正确。 
    */
    return 0;
}
/*你的提交的代码将被添加在此处，请完成题目所要求的函数的定义*/
int delNode(LinkList L, ElementType x)
{
    LinkList p = L -> next;
    LinkList q = L;

    while (p != NULL)
    {
        if (p -> data == x)
        {
            q -> next = p -> next;
            free(p);
            p = q -> next;
            return 1;
        }
        else
        {
            q = p;
            p = p -> next;
        }
    }

    return 0; 
}