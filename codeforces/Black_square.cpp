#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i=0,j,k,l,m,n,a,b,c,d,sum=0;
    string s;
    cin>>a>>b>>c>>d;
    cin>>s;

    l=s.size();
    i=0;
    while(l--)
    {
        if(s[i]=='1')
            sum+=a;
        if(s[i]=='2')
            sum+=b;
        if(s[i]=='3')
            sum+=c;
        if(s[i]=='4')
            sum+=d;

        i++;

    }

    cout<<sum;
    return 0;
}
