#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n;
    int t,a[10000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        m=10000;
        for(j=0;j<n-1;j++)
        {
            if((a[j+1]-a[j])<m)
                m=a[j+1]-a[j];
        }

        cout<<m<<endl;
    }

    return 0;
}
