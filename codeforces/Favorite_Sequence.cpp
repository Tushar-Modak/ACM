#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t,a[100000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(k=0;k<n;k++)
        {
            cin>>a[k];
        }
        i=0;
        j=n-1;
        l=n/2;
        while(i!=l)
        {
            cout<<a[i]<<" ";
            i++;
            cout<<a[j]<<" ";
            j--;
        }
        if(n%2!=0)
            cout<<a[i]<<" ";
        cout<<endl;
    }


    return 0;
}
