// Prime Factor of Number
// ex- 12 ----> prime factor 2,3 and we print 2,2,3(2*2*3=12)
// ex- 315 ----> prime factor 3,3,5,7 (print)
// ex- 13 ----> print 13

#include <iostream>
using namespace std;
bool PrimeOptimized(int n)
{
    if (n == 1)
        return 0;
    if (n == 2 || n == 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}
// TC ----> O(n^2logn)
void PrimeFactorNaive(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (PrimeOptimized(i))
        {
            int x = i;
            while (n % x == 0)
            {
                cout << i << endl;
                x = x * i;
            }
        }
    }
}
void PrimeFactorBetter(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n <= 1)
            return;
        while (n % i == 0)
        {
            cout << i << endl;
            n = n / i;
        }
    }
    if (n > 1)
        cout << n << endl;
}
void PrimeFactorOptimized(int n)
{
    if (n <= 1)
        return;
    while (n % 2 == 0)
    {
        cout << "2" << endl;
        n = n / 2;
    }
    while (n % 3 == 0)
    {
        cout << "3" << endl;
        n = n / 3;
    }
    for (int i = 5; i * i <= n; i = i + 6)
    {
        while (n % i == 0)
        {
            cout << i << endl;
            n = n / i;
        }

        while (n % i + 2 == 0)
        {
            cout << i + 2 << endl;
            n = n / i + 2;
        }
    }
    if (n > 3)
        cout << n << endl;
}
int main()
{
    int n;
    cin >> n;
    PrimeFactorNaive(n);
    cout << "-----------" << endl;
    PrimeFactorBetter(n);
    cout << "-----------" << endl;
    PrimeFactorOptimized(n);
    return 0;
}