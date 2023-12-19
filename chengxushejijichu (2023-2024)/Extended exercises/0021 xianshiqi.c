#include <stdio.h>
#include <string.h>

char num[10][8] = {
    "1110111", // 0
    "0010010", // 1
    "1011101", // 2
    "1011011", // 3
    "0111010", // 4
    "1101011", // 5
    "1101111", // 6
    "1010010", // 7
    "1111111", // 8
    "1111011"  // 9
};

void print_line(int n, int s, int type) {
    printf(" ");
    for (int i = 0; i < s; i++) {
        printf("%c", num[n][type] == '1' ? '-' : ' ');
    }
    printf(" ");
}

void print_column(int n, int s, int type1, int type2) {
    printf("%c", num[n][type1] == '1' ? '|' : ' ');
    for (int i = 0; i < s; i++) {
        printf(" ");
    }
    printf("%c", num[n][type2] == '1' ? '|' : ' ');
}

int main() {
    //freopen("in1.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int s;
    char n[10];
    while (scanf("%d %s", &s, n) && (s != 0 || strcmp(n, "0") != 0)) {
        int len = strlen(n);

        for (int i = 0; i < len; i++) {
            print_line(n[i] - '0', s, 0);
            if (i != len - 1) printf(" ");
        }
        printf("\n");

        for (int i = 0; i < s; i++) {
            for (int j = 0; j < len; j++) {
                print_column(n[j] - '0', s, 1, 2);
                if (j != len - 1) printf(" ");
            }
            printf("\n");
        }

        for (int i = 0; i < len; i++) {
            print_line(n[i] - '0', s, 3);
            if (i != len - 1) printf(" ");
        }
        printf("\n");

        for (int i = 0; i < s; i++) {
            for (int j = 0; j < len; j++) {
                print_column(n[j] - '0', s, 4, 5);
                if (j != len - 1) printf(" ");
            }
            printf("\n");
        }

        for (int i = 0; i < len; i++) {
            print_line(n[i] - '0', s, 6);
            if (i != len - 1) printf(" ");
        }
        printf("\n\n");
    }

    return 0;
}