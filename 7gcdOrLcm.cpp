// GCD or HCF of Two number 
#include<iostream>
using namespace std;
int GCDofTwoNAIVE(int n1,int n2){
int mini = (n1<n2)? n1:n2;
while (mini>0)
{
     if(n1%mini==0 && n2%mini==0) break;
     mini--;
}
return mini;
}
int GCDofTwoBETTER(int n1,int n2){
     while (n1!=n2)
     {if(n1>n2) n1= n1-n2;
     if(n2>n1) n2= n2-n1;
         
     }
     return n1;    
}
int GCDofTwoOptimized(int n1,int n2){
     if(n2==0) return n1;
     else{
          return GCDofTwoOptimized(n2,n1%n2);
     }
}
int main()
{
   int n1,n2;
   cin>>n1>>n2;
  cout<<GCDofTwoNAIVE(n1,n2)<<endl;
  cout<<"GCDofTwoBETTER(n1,n2) :" ;
  cout<<GCDofTwoBETTER(n1,n2)<<endl;
 cout<<"GCDofTwoOptimized(n1,n2) :" ;
  cout<<GCDofTwoOptimized(n1,n2)<<endl;
    return 0;
}