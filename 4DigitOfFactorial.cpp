// Digit of Factorial 
#include<iostream>
using namespace std;

int FactorialNaive2(int n){
     if(n==0){
          return 1;
     }
     return (n * FactorialNaive2(n-1));
}
int CountDigitBetter(int n){
      return (log10(n)+1);

      // TC O(1)
}
int CountDigit(int n){
int x= FactorialNaive2(n);
return CountDigitBetter(x);

}
int main()
{
   
  cout<<CountDigit(5);
    return 0;
}