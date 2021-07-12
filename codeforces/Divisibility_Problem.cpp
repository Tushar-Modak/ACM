#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,n,m;
    int t,c;

    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n>>m;
        if(n%m==0)
            cout<<c<<endl;
        else
        {
            k=n/m;
            l=(k+1)*m;
            c=l-n;
            cout<<c<<endl;
        }
    }
    return 0;
}
