// Computing Power 
#include<iostream>
#include<math.h>
using namespace std;

int Power(int n,int x){
     int res=1;
    for (int i = 0; i < n; i++)
    {
        res = res*x;
       
    }
    return res;
    
}
int main()
{
   int n,x;
   cin >> n>>x;
   cout<<Power(n,x)<<endl;
  

   

    return 0;
}