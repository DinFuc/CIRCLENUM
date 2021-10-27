int first(long long x)
{
    while (x >= 10)
        x /= 10;
    return x;
}
long long solve(long long x)
{
    if (x < 10)
        return x;
    long long res = x / 10 + 9;
    long long last = x % 10;
    if (last < first(x))
        res--;
    return res;
}
long long circlenum(long long l, long long r)
{
    return solve(r) - solve(l - 1);
}
