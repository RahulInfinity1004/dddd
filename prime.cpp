// Checking for Prime Number
#include<iostream>
using namespace std;


// Naive (Brute force Solution)
bool checkPrime(int n){
     if(n==1) return false;
     for (int i = 2; i < n; i++)
     {
          if(n%i==0) return false;
     }
     return true;
     
}
bool EfficientPrimeSolution(int n){
     if(n==1) return false;
     for (int i = 2; i*i <= n; i++)
     {
          if(n%i==0) return false;

     }
     return true;
      
}
bool MostEfficientSolution(int n){
     if(n==1) return false;
     if(n==2 || n==3) return true;
          if(n%2==0 || n%3==0) return false;
     for (int i = 5; i*i <= n; i+=6)
     {
          if(n%i==0 || n%(i+2)==0) return false;
     return true;
     }   
}
int main()
{
   int n;
   cin>>n;
 int NaiveSolution=  checkPrime(n);
 int EfficientSolution = EfficientPrimeSolution(n);
 int MostEfficientSolutions = MostEfficientSolution(n);
   cout<<"the prime number "<<n<<" is "<<NaiveSolution<<"  (1= true & 0= false)"<<endl;
   cout<<"the prime number "<<n<<" is "<<EfficientSolution<<"  (1= true & 0= false)"<<endl;
   cout<<"the prime number "<<n<<" is "<<MostEfficientSolutions<<"  (1= true & 0= false)"<<endl;

    return 0;
}