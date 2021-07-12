#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,k,l,m,n,a[99999]={0};
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if((a[i]+m)<=5)
            j++;

    }
    cout<<j/3;
    return 0;
}

