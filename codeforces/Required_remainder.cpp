#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    int a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        n=c/a;

        while(true)
        {
            l=((a*n)+b);
            if(l<=c)
            {
                cout<<l<<endl;
                break;
            }
            else
            {
                n--;
            }
        }

    }
    return 0;
}
