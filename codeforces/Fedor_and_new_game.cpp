#include <iostream>
#include <bitset>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,j,k,l,m,c,a[10000],sum=0;
    cin>>n>>m>>k;
    for(i=0;i<=m;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        l=a[i]^a[m];
        c=0;
        for(j=0;j<20;j++)
        {
            if(l&1)
                c++;
            l/=2;
        }
        if(c<=k)
          sum++;
    }

cout<<sum<<endl;

    return 0;
}

