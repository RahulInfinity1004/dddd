// Trailing Zero's in Factorial 
// Ex  5 ---> factorial 120 ----> tailing Zero ===> 1
// Ex  10 ---> factorial 3628800 ----> tailing Zero ===> 2
#include<iostream>
using namespace std;
int FactorialNaive2(int n){
     if(n==0){
          return 1;
     }
     return (n * FactorialNaive2(n-1));
}
int TrailingZeroNaive(int n){
int x= FactorialNaive2(n);
int count=0;
while(x%10==0){
    count++;
x/=10; 
}
return count;
}
int TrailingZeroBetter(int n){
     int count=0;
     for (int i = 5; i <=n ; i=i*5)
     {
          count= count+ n/i;
     }
     return count;
     // TC is  thetha(logN)
}
int main()

{
   int n;
   cin>>n;
   cout<<TrailingZeroNaive(n)<<endl;
   cout<<"TrailingZeroBetter: ";
   cout<<TrailingZeroBetter(n)<<endl;

    return 0;
}