
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
        if(n>m)
        {
            if((n%2!=0) && (m%2!=0))
            {
                cout<<1<<endl;
            }
            if((n%2!=0) && (m%2==0))
            {
                cout<<2<<endl;
            }
            if((n%2==0) && (m%2!=0))
            {
                cout<<2<<endl;
            }
            if((n%2==0) && (m%2==0))
            {
                cout<<1<<endl;
            }
        }
        else if(m>n)
        {
            if((n%2!=0) && (m%2!=0))
            {
                cout<<2<<endl;
            }
            if((n%2!=0) && (m%2==0))
            {
                cout<<1<<endl;
            }
            if((n%2==0) && (m%2!=0))
            {
                cout<<1<<endl;
            }
            if((n%2==0) && (m%2==0))
            {
                cout<<2<<endl;
            }

        }
        else
        {
            cout<<0<<endl;
        }



    }

    return 0;
}
