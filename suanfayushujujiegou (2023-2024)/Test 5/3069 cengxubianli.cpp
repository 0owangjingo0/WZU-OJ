#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;
typedef struct Node
{
    ElementType data;
    struct Node *lchild;
    struct Node *rchild;
}BTNode,*BTree;

void layerOrder(BTree rt);

int main()
{
    /*此处代码由测试程序自动添加，主要为了向顺序表中插入数据
	并输出数据,你无需关心此处代码的具体实现细节。
	如果有必要，请自己添加代码以测试你的函数是否正确。 
    */
    return 0;
}
/*你的提交的代码将被添加在此处，请完成题目所要求的函数的定义*/
void layerOrder(BTree rt)
{
    BTree queue[100];
    int front = 0, rear = 0;
    if (rt != NULL)
    {
        queue[rear++] = rt;
        while (front != rear)
        {
            BTree p = queue[front++];
            printf("%c", p -> data);
            if (p -> lchild != NULL)
            {
                queue[rear++] = p -> lchild;
            }
            if (p -> rchild != NULL)
            {
                queue[rear++] = p -> rchild;
            }
        }
    }
}