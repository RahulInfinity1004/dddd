// Count the number of digit in a number 
// 456 ---> 3

#include<iostream>
using namespace std;
int CountDigitNaive(int n){
     int count=0;
     while (n>0)
     {
          n=n/10;
          count++;
     }
     return count;

     // TC  O(n)
}
int CountDigitBetter(int n){
      return (log10(n)+1);

      // TC O(1)
}
int main()
{
   int n;
   cin>>n;
  cout<<"the number "<<n<<" has digit: "<<CountDigitNaive(n)<<endl;
  cout<<"the number "<<n<<" has digit: "<<CountDigitBetter(n)<<endl;
    return 0;
}