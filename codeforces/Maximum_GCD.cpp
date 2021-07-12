#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        l=1;
        if(a%2==0)
        {
            n=a;
            m=a/2;
        }
        else
        {
            n=a-1;
            m=n/2;
        }
        for(i=1;i<=m;i++)
            {
                if(n%i==0 && m%i==0)
                {
                    l=max(l,i);
                }

            }
        cout<<l<<endl;
    }

    return 0;
}
