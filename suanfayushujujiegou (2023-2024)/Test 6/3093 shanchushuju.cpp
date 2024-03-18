#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef  struct  Node{
	ElementType  data;
	struct Node  *lchild;
	struct Node  *rchild;
}BSTNode, *BSTree;

BSTree deleteNode(BSTree bst, ElementType x);
BSTNode* findMin(BSTree root);
BSTNode* findMax(BSTree bst);

int main()
{
    /*此处代码由测试程序自动添加，主要为了向顺序表中插入数据
	并输出数据,你无需关心此处代码的具体实现细节。
	如果有必要，请自己添加代码以测试你的函数是否正确。 
    */
    return 0;
}
/*你的提交的代码将被添加在此处，请完成题目所要求的函数的定义*/
BSTree deleteNode(BSTree bst, ElementType x)
{
    if (bst == NULL)
    {
        return NULL;
    }
    if (x < bst->data)
    {
        bst->lchild = deleteNode(bst->lchild, x);
    }
    else if (x > bst->data)
    {
        bst->rchild = deleteNode(bst->rchild, x);
    }
    else
    {
        if (bst->lchild != NULL && bst->rchild != NULL)
        {                                                    
            BSTNode *min = findMin(bst->rchild);             
            bst->data = min->data;                            
            bst->rchild = deleteNode(bst->rchild, min->data);
        }
        else
        {
            BSTNode *temp = bst;
            if (bst->lchild != NULL)
            {
                bst = bst->lchild;
            }
            else
            {
                bst = bst->rchild;
            }
            delete temp;
        }
    }
    return bst;
}