#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int  coef;	//系数(coefficient)
    int  exp;	//指数(exponent)
    struct Node *next;
} PolyNode, *PolyList;

void polySub(PolyList LA, PolyList LB,PolyList LC);

int main()
{
    /*此处代码由测试程序自动添加，主要为了向顺序表中插入数据
	并输出数据,你无需关心此处代码的具体实现细节。
	如果有必要，请自己添加代码以测试你的函数是否正确。 
    */
    return 0;
}
/*你的提交的代码将被添加在此处，请完成题目所要求的函数的定义*/
void polySub(PolyList LA, PolyList LB,PolyList LC)
{
    PolyList p1, p2, p3;
    p1 = LA -> next;
    p2 = LB -> next;
    p3 = LC;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1 -> exp > p2 -> exp)
        {
            Node * node = (Node *)malloc(sizeof(Node));
            node -> coef = p1 -> coef;
            node -> exp = p1 -> exp;
            node -> next = NULL;
            p3 -> next = node;
            p3 = p3 -> next;
            p1 = p1 -> next;
        }
        else if (p1 -> exp == p2 -> exp)
        {
            if (p1 -> coef - p2 -> coef != 0)
            {
                Node * node = (Node *)malloc(sizeof(Node));
                node -> coef = p1 -> coef - p2 -> coef;
                node -> exp = p1 -> exp;
                node -> next = NULL;
                p3 -> next = node;
                p3 = p3 -> next;
            }
            p1 = p1 -> next;
            p2 = p2 -> next;
        }
        else
        {
            Node * node = (Node *)malloc(sizeof(Node));
            node -> coef = -(p2 -> coef);
            node -> exp = p2 -> exp;
            node -> next = NULL;
            p3 -> next = node;
            p3 = p3 -> next;
            p2 = p2 -> next;
        }
    }

    while (p1 != NULL)
    {
        Node * node = (Node *)malloc(sizeof(Node));
        node -> coef = p1 -> coef;
        node -> exp = p1 -> exp;
        node -> next = NULL;
        p3 -> next = node;
        p3 = p3 -> next;
        p1 = p1 -> next;
    }
    while (p2 != NULL)
    {
        Node * node = (Node *)malloc(sizeof(Node));
        node -> coef = -(p2 -> coef);
        node -> exp = p2 -> exp;
        node -> next = NULL;
        p3 -> next = node;
        p3 = p3 -> next;
        p2 = p2 -> next;
    }
}