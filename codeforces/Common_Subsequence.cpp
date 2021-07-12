#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    int a[100000],b[100000];
    cin>>t;
    while(t--)
    {
        l=0;
        int res;
        k=0;
        int minv;
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>b[i];
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i]==b[j])
                {
                    l=1;
                    minv=a[i];
                    break;
                }
            }
            if(l==1)
            {
                break;
            }
        }

        if(l==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<1<<" "<<minv<<endl;
        }
    }

    return 0;
}
