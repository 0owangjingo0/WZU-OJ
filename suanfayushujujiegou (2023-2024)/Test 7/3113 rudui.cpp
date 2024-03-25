#include <bits/stdc++.h>
using namespace std;

typedef int ElementType;
typedef struct{
	ElementType *data; //数据
	int size;	 		//大小
	int capacity;  		//容量
}HNode, *Heap;

void swap(Heap H,int i,int j);
int push(Heap H,ElementType x);

int main()
{
    /*此处代码由测试程序自动添加，主要为了向顺序表中插入数据
	并输出数据,你无需关心此处代码的具体实现细节。
	如果有必要，请自己添加代码以测试你的函数是否正确。 
    */
    return 0;
}
/*你的提交的代码将被添加在此处，请完成题目所要求的函数的定义*/
int push(Heap H,ElementType x)
{
    if (H -> size == H -> capacity)
    {
        return 0;
    }
    else
    {
        H -> size++;
        H -> data[H -> size] = x;
        int i = H -> size;
        int pi = (H -> size) / 2;
        while (i > 1 && H -> data[i] > H -> data[pi])
        {
            swap(H, i, pi);
            i = pi;
            pi = i / 2;
        }

        return 1;
    }
}