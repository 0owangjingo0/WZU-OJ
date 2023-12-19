#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {

    //freopen("in1.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    int *lst = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &lst[i]);
    }

    qsort(lst, n, sizeof(int), cmp);

    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        lst[i + 1] = lst[i] + lst[i + 1];
        sum += lst[i + 1];
        qsort(lst + i + 1, n - i - 1, sizeof(int), cmp);
    }

    printf("%d\n", sum);

    free(lst);
    return 0;
}