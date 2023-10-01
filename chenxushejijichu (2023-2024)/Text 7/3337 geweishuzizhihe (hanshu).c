int calcSumOfNumber(int x)
{
    int s = 0;
    int z,y;

    z = x/10;
    y = x%10;

    while (z != 0)
    {
        s += y;
        y = z%10;
        z = z/10;
    }
    s += y;

    return s;
}