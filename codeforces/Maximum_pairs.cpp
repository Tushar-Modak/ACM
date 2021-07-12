#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,t;
    long long int a[10];

    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];

        sort(a,a+3);

        if(a[1]!=a[2])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
        }
    }
    return 0;
}
