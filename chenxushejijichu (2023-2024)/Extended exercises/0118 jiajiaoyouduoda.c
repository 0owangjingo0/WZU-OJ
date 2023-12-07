#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int h, m, s;
        scanf("%d %d %d", &h, &m, &s);

        double h_angle = (h + m / 60.0 + s / 3600.0) / 12.0 * 360.0;
        double m_angle = (m + s / 60.0) / 60.0 * 360.0;

        double angle = h_angle - m_angle;
        if (angle < 0)
        {
            angle = -angle;
        }
        if (angle > 180)
        {
            angle = 360 - angle;
        }
        printf("%d\n", (int)angle);
    }
    return 0;
}