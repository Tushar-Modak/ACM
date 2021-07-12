#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,k,l,m,n,a[15]={0};
    cin>>n;
    a[0]=1;
    while(j<n)
    {
     for(i=0;i<n-1;i++)
     {
        a[i+1]=a[i]+a[i+1];
     }
    j++;
    }
    cout<<a[n-1];
    return 0;
}
