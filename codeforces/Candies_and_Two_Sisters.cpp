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
        l=0;
        cin>>n;
        if(n==1 && n==2)
        {
            cout<<l<<endl;

        }
        else
        {
            if(n%2==0)
            {
                l=n/2;
                cout<<l-1<<endl;

            }
            else
            {
                l=n/2;
                cout<<l<<endl;

            }
        }

    }
    return 0;
}
