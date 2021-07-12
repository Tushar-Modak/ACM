#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,a,b;
    cin>>n;
    while(n--)
    {
        i=0;
        cin>>a>>b;
        if(a>b)
        {
            l=a-b;
            k=l/10;
            if(l%10!=0)
            {
                cout<<k+1<<endl;
            }
            else
            {
                cout<<k<<endl;
            }
        }
        else if(b>a)
        {
            l=b-a;
            k=l/10;
            if(l%10!=0)
            {
                cout<<k+1<<endl;
            }
            else
            {
                cout<<k<<endl;
            }
        }
        else
            cout<<i<<endl;
    }

    return 0;
}
