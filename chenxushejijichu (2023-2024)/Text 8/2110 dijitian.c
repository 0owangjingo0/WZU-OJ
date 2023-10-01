#include <stdio.h>
int is_runnian(int year);

int is_runnian(int year)
{

    if (
        (year % 4 == 0)
        &&
        (year % 100 != 0)
    )
    {
        return 1;
    }
    else if (year % 400 == 0)
    {
        return 1;
    }

    return 0;
}




int calcDays(int year, int month, int day)
{
    int day_list[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int s_day = 0;

    if (is_runnian(year))
    {
        day_list[1] = 29;
    }
    s_day += day;
    month--;

    while (month != 0)
    {
        s_day += day_list[month - 1];
        month--;
    }

    return s_day;

}
int calcDays(int year, int month, int day); 

int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		int year, month, day;
		scanf("%d/%d/%d", &year, &month, &day);
		printf("%d\n", calcDays(year, month, day));
	}
	return 0;
}