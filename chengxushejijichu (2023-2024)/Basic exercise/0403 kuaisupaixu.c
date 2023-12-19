#include <stdio.h>

void quick_sort(int arr[], int left, int right);

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int m;
        scanf("%d", &m);

        int arr[100];
        int i = 0;

        while (m--)
        {
            scanf("%d", &arr[i]);
            i++;
        }
        quick_sort(arr, 0, i - 1);

        for (int j = 0; j < i-1; j++)
        {
            printf("%d ", arr[j]);
        }
        printf("%d\n", arr[i-1]);
    }
}

void quick_sort(int arr[], int left, int right)
{
    int i, j, t, temp;
    if (left > right)
    {
        return;
    }
    temp = arr[left]; //temp中存的就是基准数
    i = left;
    j = right;
    while (i != j)
    {
        //顺序很重要，要先从右边开始找
        while (arr[j] >= temp && i < j)
        {
            j--;
        }
        //再找右边的
        while (arr[i] <= temp && i < j)
        {
            i++;
        }
        //交换两个数在数组中的位置
        if (i < j)
        {
            t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    //最终将基准数归位
    arr[left] = arr[i];
    arr[i] = temp;

    quick_sort(arr, left, i - 1);//继续处理左边的，这里是一个递归的过程
    quick_sort(arr, i + 1, right);//继续处理右边的 ，这里是一个递归的过程
}