#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,t;
    long long int a[100000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(a[0]+a[1]<=a[n-1])
        {
            cout<<"1 2 "<<n<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}

