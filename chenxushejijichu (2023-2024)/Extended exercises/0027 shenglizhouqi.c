#include <stdio.h>

int main(void) {
    int p, e, i, d;
    int caseNum = 1;

    while (scanf("%d %d %d %d", &p, &e, &i, &d) != EOF && p != -1) {
        int day;
        for (day = d + 1; (day - p) % 23 || (day - e) % 28 || (day - i) % 33; day++);
        printf("Case %d: the next triple peak occurs in %d days.\n", caseNum++, day - d);
    }

    return 0;
}