#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,a,t,c,c2;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>a;
        c=1;
        while(n%2==0)
        {
            n=n/2;
            c=c*2;
        }
        while(m%2==0)
        {
            m=m/2;
            c=c*2;
        }

        if(c>=a)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }



    }
    return 0;
}
