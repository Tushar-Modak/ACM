#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,k,l,m,n,sum=0,a[15]={0};
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=(n-i)*i;
    }
    cout<<sum+n;
    return 0;
}

