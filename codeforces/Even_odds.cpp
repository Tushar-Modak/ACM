#include <iostream>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,Even,Odd;
    cin>>n>>m;
     if(n%2==0)
     {
         Even=n/2;
         Odd=n/2;
     }
     else
     {
         Even=(n/2)-1;
         Odd=(n/2)+1;
     }

     if(m<=Odd)
     {
         cout<<(m*2)-1;
     }
     else
     {
         k=m-Odd;
         cout<<k*2;
     }
    return 0;
}
