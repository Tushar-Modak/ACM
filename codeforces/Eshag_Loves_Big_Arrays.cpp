#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t,c;
    int a[1000];

    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        c=0;
        int minv=*min_element(a,a+n);
        for(i=0;i<n;i++)
        {
            if(a[i]>minv)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }


    return 0;
}
