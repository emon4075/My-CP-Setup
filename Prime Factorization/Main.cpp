vector<int> prime_Factors(int n)
{
    vector<int> Factors;
    for (auto P : Primes)
    {
        if (P * P > n)
        {
            break;
        }
        while (n % P == 0)
        {
            Factors.push_back(P);
            n /= P;
        }
    }
    if (n > 1)
    {
        Factors.push_back(n);
    }
    return Factors;
}
