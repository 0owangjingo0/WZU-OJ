#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int weight[12] = {0};
        char left[3][7], right[3][7], result[3][7];
        for (int i = 0; i < 3; i++) {
            scanf("%s %s %s", left[i], right[i], result[i]);
            if (strcmp(result[i], "even") == 0) {
                for (int j = 0; j < strlen(left[i]); j++) {
                    weight[left[i][j] - 'A'] = 1;
                    weight[right[i][j] - 'A'] = 1;
                }
            }
        }
        for (int i = 0; i < 3; i++) {
            if (strcmp(result[i], "even") != 0) {
                for (int j = 0; j < strlen(left[i]); j++) {
                    if (weight[left[i][j] - 'A'] != 1) {
                        weight[left[i][j] - 'A'] = strcmp(result[i], "up") == 0 ? -1 : 2;
                    }
                    if (weight[right[i][j] - 'A'] != 1) {
                        weight[right[i][j] - 'A'] = strcmp(result[i], "up") == 0 ? 2 : -1;
                    }
                }
            }
        }
        for (int i = 0; i < 12; i++) {
            if (weight[i] == -1 || weight[i] == 2) {
                printf("%c is the counterfeit coin and it is %s.\n", i + 'A', weight[i] == -1 ? "heavy" : "light");
                break;
            }
        }
    }
    return 0;
}