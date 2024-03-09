#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int  coef;	//系数(coefficient)
    int  exp;	//指数(exponent)
    struct Node *next;
} PolyNode, *PolyList;

void printList(PolyList L);

int main()
{
    /*此处代码由测试程序自动添加，主要为了向顺序表中插入数据
	并输出数据,你无需关心此处代码的具体实现细节。
	如果有必要，请自己添加代码以测试你的函数是否正确。 
    */
    return 0;
}
/*你的提交的代码将被添加在此处，请完成题目所要求的函数的定义*/
void printList(PolyList L)
{
    PolyNode *p = L->next;
    bool isFirst = true;
    while (p)
    {
        int coef = p->coef;
        int exp = p->exp;
        if (coef == 0)
        {
            p = p->next;
            continue;
        }
        if (!isFirst)
        {
            printf(coef > 0 ? "+" : "");
        }
        isFirst = false;
        if (abs(coef) != 1 || exp == 0)
        {
            printf("%d", coef);
        }
        else if (coef == -1)
        {
            printf("-");
        }
        if (exp > 0)
        {
            printf("x");
            if (exp > 1)
            {
                printf("^%d", exp);
            }
        }
        p = p->next;
    }
    if (isFirst)
    {
        printf("0");
    }
    printf("\n");
}