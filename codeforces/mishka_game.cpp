#include <iostream>
using namespace std;
int main()
{int i,j,k,l=0,m,c,m1=0,c1=0,n,a[10000];
 cin>>n;
 j=n/2;
 for(i=0;i<n;i++)
 {
     cin>>m>>c;
     if(m>c)
        m1++;
     else if(c>m)
        c1++;
     else
      l++;


 }
if(c1==m1)
    cout<<"Friendship is magic!^^";
else if(c1>m1)
    cout<<"Chris";
else
    cout<<"Mishka";

return 0;
}
