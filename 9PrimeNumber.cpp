// Prime Number 
#include<iostream>
using namespace std;

bool PrimeNAIVE(int n){
  
     if(n==1) return 0;

     for (int i = 2; i < n; i++)
     {
          if(n%i==0) return 0;
     }
     return 1;
}
bool PrimeBetter(int n){
     if(n==1) return 0;
     for (int i = 2; i*i <= n; i++)
     {
         if(n%i==0) return 0;
     }
     return 1;   
}
bool PrimeOptimized(int n){
     if(n==1) return 0;
     if(n==2 || n==3 ) return 1;
     if(n%2==0 || n%3==0 ) return 0;
     for (int i = 5; i*i <= n; i=i+6)
     {
          if(n%i==0 || n%(i+2)==0) return 0;
     }
     return 1;
     
}
int main()
{
   int n;
   cin>>n;
   cout<<"PrimeNAIVE(n): "<<PrimeNAIVE(n)<<endl;
   cout<<"PrimeBetter(n): "<<PrimeBetter(n)<<endl;
   cout<<"PrimeOptimized(n): "<<PrimeOptimized(n)<<endl;

    return 0;
}