#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,l,m,n,x,y,b[10000],c[10000];
    int a[105]={0};
    cin>>n;
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>m;
        a[m]=1;
    }

    cin>>y;
    for(i=0;i<y;i++)
    {
        cin>>m;
        a[m]=1;
    }

    for(i=1;i<=n;i++)
    {
        if(a[i]!=0)
          k=1;
        else
        {
             k=0;
             break;
        }
    }

    if(k==1)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
    return 0;
}
