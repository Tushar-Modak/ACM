#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        l=n*m;
        if(l%2!=0)
        {
            k=(l-1)/2;
            cout<<k+1<<endl;
        }
        else
        {
            k=l/2;
            cout<<k<<endl;
        }

    }

    return 0;
}
