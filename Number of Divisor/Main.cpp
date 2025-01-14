int Number_of_Divisors(int n)
{
    int NOD = 1;
    for (auto P : Primes)
    {
        int Count = 0;
        if (P * P > n)
        {
            break;
        }
        while (n % P == 0)
        {
            n /= P;
            Count++;
        }
        Count++;
        NOD *= Count;
    }
    if (n > 1)
    {
        NOD *= 2;
    }
    return NOD;
}
