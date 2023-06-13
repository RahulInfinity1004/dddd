// Absolute Value 

#include<iostream>
using namespace std;

int findAbsolute(int n){
     if(n>0) return n;
     if(n<0) return (-1*n);
}
int main()
{
   int n;
   cin>>n;
   cout<<"Absolute Value of "<<n<<" is "<<findAbsolute(n)<<endl;

    return 0;
}