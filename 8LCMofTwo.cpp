// LCM of Two Number 
#include<iostream>
using namespace std;
int LCMofTwoNAIVE(int n1,int n2){
     int max = (n1>n2)? n1: n2;
     while (max>0)
     {
          if(max%n1==0 && max%n2==0) break;
          max++;
     }
     return max;
     
}
int GCDofTwoOptimized(int n1,int n2){
     if(n2==0) return n1;
     else{
          return GCDofTwoOptimized(n2,n1%n2);
     }
}
int LCMOptimized(int n1,int n2){
     return ((n1*n2)/GCDofTwoOptimized(n1,n2));
}
int main()
{
   int n1,n2;
   cin>>n1>>n2;
   cout<<"LCM Optimal : "<<LCMOptimized(n1,n2)<<endl;
   cout<<"LCM Naive : "<<LCMofTwoNAIVE(n1,n2)<<endl;



    return 0;
}