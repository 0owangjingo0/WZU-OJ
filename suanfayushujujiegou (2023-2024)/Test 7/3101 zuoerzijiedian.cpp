#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct{
	ElementType *data; //数据
	int size;	 		//大小
	int capacity;  		//容量
}HNode, *Heap;

int left(int i);

int main()
{
    /*此处代码由测试程序自动添加，主要为了向顺序表中插入数据
	并输出数据,你无需关心此处代码的具体实现细节。
	如果有必要，请自己添加代码以测试你的函数是否正确。 
    */
    return 0;
}
/*你的提交的代码将被添加在此处，请完成题目所要求的函数的定义*/
int left(int i)
{
    return 2*i;
}