#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,o,p,s,t;
    long long int a,b,c,d;
    cin>>a>>b>>s;

    if(s>=(abs(a)+abs(b))&&((s-(abs(a)+abs(b)))%2==0))
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}

