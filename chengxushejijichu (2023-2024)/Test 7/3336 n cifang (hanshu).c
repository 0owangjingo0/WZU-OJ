int Power(int x, int n)
{
    int s = 1;

    while (n >= 1)
    {
        s *= x;

        n--;
    }

    return s;
}