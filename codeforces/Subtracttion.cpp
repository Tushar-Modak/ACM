#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,j,k,l,m,n;

    cin>>n>>m;
    l=n;
    while(m--)
    {
       k=n%10;

       if(k==0)
       {
           n=n/10;
       }
       else
       {
           n=n-1;
       }
    }

    cout<<n;
    return 0;
}

