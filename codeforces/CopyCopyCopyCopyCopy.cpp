#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,t,cnt;
    long long int a[100000];
    cin>>t;

    while(t--)
    {
        cnt=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        for(i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
            {
                cnt++;
            }

        }

        cout<<cnt+1<<endl;
    }

    return 0;
}
