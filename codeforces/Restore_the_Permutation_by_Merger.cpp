#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    int b[100000]={0},c[100000];

    cin>>t;
    while(t--)
    {
        j=1;
        cin>>n;
        for(i=0;i<2*n;i++)
        {
            cin>>m;
            if(b[m]==0)
            {
                c[j]=m;
                b[m]=1;
                j++;
            }
        }
        for(k=1;k<=n;k++)
        {
            b[c[k]]=0;
            cout<<c[k]<<" ";

        }
        cout<<endl;

    }

    return 0;
}
