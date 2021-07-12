#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,t;
    long long int a,b,c,d,x,y,z;

    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        x=max(a,b);
        y=max(b,c);
        z=min(c,d);

        cout<<x<<" "<<y<<" "<<z<<endl;

    }

    return 0;
}
