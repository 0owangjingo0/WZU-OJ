#include <stdlib.h>
#include <stdio.h>

typedef char ElementType;
typedef struct Node
{
    ElementType data;
    struct Node *lchild;
    struct Node *rchild;
}BTNode,*BTree;

BTree createTree(char s[],int left,int right);

int main()
{
    /*此处代码由测试程序自动添加，主要为了向顺序表中插入数据
	并输出数据,你无需关心此处代码的具体实现细节。
	如果有必要，请自己添加代码以测试你的函数是否正确。 
    */
    return 0;
}
/*你的提交的代码将被添加在此处，请完成题目所要求的函数的定义*/
BTree createTree(char s[],int left,int right)
{
    BTree root = NULL;
    BTree stack[100];
    int top = -1;
    BTree p = NULL;
    int k = 0;
    for (int i = left; i <= right; i++)
    {
        switch (s[i])
        {
        case '(':
            top++;
            stack[top] = p;
            k = 1;
            break;
        case ')':
            top--;
            break;
        case ',':
            k = 2;
            break;
        default:
            p = (BTree)malloc(sizeof(BTNode));
            p -> data = s[i];
            p -> lchild = p -> rchild = NULL;
            if (root == NULL)
            {
                root = p;
            }
            else
            {
                switch (k)
                {
                case 1:
                    stack[top] -> lchild = p;
                    break;
                case 2:
                    stack[top] -> rchild = p;
                    break;
                }
            }
        }
    }
    return root;
}
