#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,m,n,l=0,h=0,t;
    int sum=0;
    string s;
    cin>>s;
    s="a"+s;
    n=s.size();

    for(i=1;i<n;i++)
    {
    l=s[i]-s[i-1];
    if(l<0)
        l=-l;

    h=26-l;

    if(l<h)
        sum+=l;
    else
        sum+=h;

    }
    cout<<sum;
    return 0;
}



//'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b',
