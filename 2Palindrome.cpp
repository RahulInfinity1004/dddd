// Number  is Palindrome or not 

#include<iostream>
using namespace std;

bool Palindrome(int n){
     int rev=0;
     int m=n;
     while (n>0)
     {
         int r=n%10;
          n/=10;
          rev=rev*10+r;
     }
     if (rev==m)
     {
          return true;
     }
     
return false;

}

int main()
{
   int n;
   cin>>n;
   cout<<"n: "<<n<<" is palindrome ==> "<<Palindrome(n)<<endl;

    return 0;
}