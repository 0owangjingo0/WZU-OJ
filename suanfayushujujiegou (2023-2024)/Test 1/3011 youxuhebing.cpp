#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct
{
    ElementType *array; // 存放数据的指针
    int length;         // 已有数据个数
    int capacity;       // 容量
} SeqList;

void mergeList(SeqList *LA, SeqList *LB, SeqList *LC);

int main()
{
    /*此处代码由测试程序自动添加，主要为了向顺序表中插入数据
    并输出数据,你无需关心此处代码的具体实现细节。
    如果有必要，请自己添加代码以测试你的函数是否正确。
    */
    return 0;
}
/*你的提交的代码将被添加在此处，请完成题目所要求的函数的定义*/
void mergeList(SeqList *LA, SeqList *LB, SeqList *LC)
{
    int ia = 0;
    int ib = 0;
    int ic = 0;
    while (ia < LA->length && ib < LB->length)
    {
        if (LA->array[ia] < LB->array[ib])
        {
            LC->array[ic] = LA->array[ia];
            ia++;
            ic++;
            (LC->length)++;
        }
        else
        {
            LC->array[ic] = LB->array[ib];
            ib++;
            ic++;
            (LC->length)++;
        }
    }

    while (ia < LA->length)
    {
        LC->array[ic] = LA->array[ia];
        ia++;
        ic++;
        (LC->length)++;
    }

    while (ib < LB->length)
    {
        LC->array[ic] = LB->array[ib];
        ib++;
        ic++;
        (LC->length)++;
    }
}