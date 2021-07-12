#include <iostream>
using namespace std;

int main()
{
    int i,j=0,l,m,n,maxv1=1,maxv2=0,a[1000];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>m;
        a[m]=i;

    }
     for(i=1;i<=n;i++)
    {
      cout<<a[i]<<" ";

    }


   // cout<<maxv2;
    return 0;
}

