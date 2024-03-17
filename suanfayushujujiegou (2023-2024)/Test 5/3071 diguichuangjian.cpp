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
BTree createTree(char s[], int left, int right)
{
    if (left > right)
    {
        return NULL;
    }

    BTree node = (BTree)malloc(sizeof(BTNode));
    node -> data = s[left];
    node -> lchild = node -> rchild = NULL;

    int lc = 0, rc = 0, mid = 0;
    for (int i = left + 2; i < right; i++)
    {
        if (s[i] == '(')
        {
            lc++;
        }
        else if (s[i] == ')')
        {
            rc++;
        }
        if (lc == rc)
        {
            mid = i;
            break;
        }
    }

    if (mid != 0)
    {
        node -> lchild = createTree(s, left + 2, mid);
        node -> rchild = createTree(s, mid + 2, right - 1);
    }

    return node;
}
