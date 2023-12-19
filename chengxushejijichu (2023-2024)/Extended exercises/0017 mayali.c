#include <stdio.h>
#include <string.h>

char haab_month[19][10] = {
    "pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", 
    "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", 
    "koyab", "cumhu", "uayet"
};
char tzolkin_day[20][10] = {
    "imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", 
    "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", 
    "cib", "caban", "eznab", "canac", "ahau"
};

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n);
    while (n--) {
        int day, year;
        char month[10];
        scanf("%d. %s %d", &day, month, &year);
        int total_days = year * 365;
        for (int i = 0; i < 19; ++i) {
            if (strcmp(month, haab_month[i]) == 0) {
                total_days += i * 20 + day;
                break;
            }
        }
        printf("%d %s %d\n", total_days % 13 + 1, tzolkin_day[total_days % 20], total_days / 260);
    }
    return 0;
}