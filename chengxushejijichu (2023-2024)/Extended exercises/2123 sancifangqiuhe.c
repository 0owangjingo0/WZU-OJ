#include <stdio.h>

int cube(int n) {
    return n * n * n;
}

int main() {
    int n;
    scanf("%d", &n);

    int prev = -1;
    for (int i = 0; i < 1000; ++i) {
        int sum = cube(n / 100) + cube(n / 10 % 10) + cube(n % 10);
        if (sum == prev) {
            printf("%d\n", sum);
            return 0;
        }
        prev = sum;
        n = sum % 1000;
    }

    printf("error\n");
    return 0;
}