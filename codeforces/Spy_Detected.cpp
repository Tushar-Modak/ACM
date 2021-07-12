#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,m,n,x,y,z,t;
    int a[100000];
    cin>>t;
    while(t--)
    {
        k=0;
        cin>>n;
        cin>>a[0];
        m=a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            if(m!=a[i])
            {
                l=i;
                k++;
            }
        }
        if(k>1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<l+1<<endl;
        }





    }

    return 0;
}
