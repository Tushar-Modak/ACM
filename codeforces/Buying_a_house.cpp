#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,a[99999];
    int c1,c2,minv=999999;
    cin>>n>>m>>k;

    c1=999999,c2=999999;
    for(i=1;i<=n;i++)
    {
     cin>>a[i];
    }

    for(i=n;i>m;i--)
    {
        if(a[i]<=k && a[i]!=0)
          c1=i;
    }
    for(i=1;i<m;i++)
    {
        if(a[i]<=k && a[i]!=0)
          c2=i;
    }
   //cout<<c1<<" "<<c2<<endl;

    c1=c1-m;
    c2=c2-m;

    if(c1<0)
      c1=-1*c1;
    else
      c1=c1;

     if(c2<0)
      c2=-1*c2;
     else
      c2=c2;

    if(c1<=c2)
    {
        cout<<c1*10;
    }
    else
    {
        cout<<c2*10;
    }


    return 0;
}
