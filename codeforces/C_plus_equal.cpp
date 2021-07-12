#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,l,m,n,a,b,c;
    int minv,maxv;

    cin>>t;
    while(t--)
    {
        c=0;
        cin>>a>>b>>n;

        while(true)
        {
            if(a>b)
            {
                b=a+b;
            }
            else
            {
                a=a+b;
            }
            c++;

            if(a>n || b>n)
            {
                break;
            }


        }
        cout<<c<<endl;
    }

    return 0;
}
