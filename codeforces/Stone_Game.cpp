#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    int a[1000],b[5];
    int maxv,minv;
    int bothFromLeft,bothFromRight;
    int maxv1,minv1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        maxv=distance(a,max_element(a,a+n));
        minv=distance(a,min_element(a,a+n));

        if(maxv>minv)
        {
            bothFromLeft=maxv+1;
            bothFromRight=n-(minv);
        }
        else
        {
            bothFromLeft=minv+1;
            bothFromRight=n-(maxv);
        }
        b[0]=bothFromLeft;
        b[1]=bothFromRight;

        maxv1=*max_element(a,a+n);
        minv1=*min_element(a,a+n);
        b[2]=(n - 1) - minv + maxv + 2;
        b[3]=(n-1)-maxv+minv+2;
        int res=*min_element(b,b+4);
        cout<<res<<endl;
    }
    return 0;
}
