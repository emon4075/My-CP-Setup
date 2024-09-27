/*
 * Time Complexity ---> O(N)
 * Just cout << is_Prime[Number_You_Want_To_Check] << endl;
 */
const int MX = 1e7;
bitset<MX> is_Prime;
void Sieve(int N)
{
    is_Prime[2] = true;
    for (int i = 3; i <= N; i += 2)
    {
        is_Prime[i] = true;
    }
    int ITR = sqrt(N);
    for (int i = 3; i <= ITR; i += 2)
    {
        if (is_Prime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                is_Prime[j] = false;
            }
        }
    }
}
