#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,o,p,s,t;
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(abs(a-c)==abs(b-d))
        cout<<a<<" "<<d<<" "<<c<<" "<<b;
    else if (a==c)
        cout<<a+b-d<<" "<<b<<" "<<c+b-d<<" "<<d;
    else if (b==d)
        cout<<a<<" "<<b+a-c<<" "<<c<<" "<<d+a-c;
    else
        cout<<-1;

    return 0;
}
