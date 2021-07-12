#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    int a[10000];
    int left,right,c;
    cin>>t;
    while(t--)
    {
        left=-1,right=-1;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1 && left==-1)
            {
                left=i;
            }
            if(a[i]==1)
            {
                right=i;
            }
        }

        c=0;
        for(i=left;i<right;i++)
        {
            if(a[i]==0)
            {
                c++;
            }
        }
        cout<<c++<<endl;

    }

    return 0;
}
