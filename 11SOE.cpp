// 11. Sieve of Eratosthenes
// Input : n =10
// Output : 2 3 5 7

// Input : n = 20
// Output: 2 3 5 7 11 13 17 19
#include <iostream>
#include <vector>
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
void NaiveSolution(int n)
{

     for (int i = 2; i <= n; i++)
     {
          if (PrimeOptimized(i))
          {
               cout << i << endl;
          }
     }
}
void SieveBetterSolution(int n)
{
     vector<bool> PrimeOptimized(n + 1, true);
     for (int i = 2; i * i <= n; i++)
     {
          if (PrimeOptimized[i])
          {
               for (int j = 2 * i; j <= n; j = j + i)
               {
                    PrimeOptimized[j] = false;
               }
          }
     }
     for (int i = 2; i <= n; i++)
     {
          if (PrimeOptimized[i])
          {
               cout << i << " ";
          }
     }
}
void SieveOpitimizedSolution(int n)
{
     vector<bool> PrimeOptimized(n + 1, true);
     for (int i = 2;  i <= n; i++)
     {
          if (PrimeOptimized[i])
          {
               cout<<i<<" ";
               for (int j = i * i; j <= n; j = j + i)
               {
                    PrimeOptimized[j] = false;
               }
          }
     }
     
}


int main()
{
     int n;
     cin >> n;
     NaiveSolution(n);
     cout << "------------" << endl;
     SieveBetterSolution(n);
     cout<< endl<< "------------" << endl;
     SieveOpitimizedSolution(n);
     return 0;
}
