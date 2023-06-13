// Factorial of Number
#include<iostream>
using namespace std;

int FactorialNaive(int n){
     int factorial=1;
     for (int i = 1; i <=n; i++)
     {
         factorial*=i; 
     }
     return factorial;
     
}
int FactorialNaive2(int n){
     if(n==0){
          return 1;
     }
     return (n * FactorialNaive2(n-1));
}
int main()
{
     int n;
     cin>>n;

   cout<<FactorialNaive(n)<<endl;
int x = FactorialNaive2(n);
   cout<<x<<endl;

    return 0;
}