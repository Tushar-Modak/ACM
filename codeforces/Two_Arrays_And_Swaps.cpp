#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,count;
    int t,a[10000],b[10000];
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n>>m;
        for(k=0;k<n;k++)
        {
            cin>>a[k];
            count+=a[k];
        }
        for(k=0;k<n;k++)
        {
            cin>>b[k];
        }
        sort(a,a+n);
        sort(b,b+n);

        i=0;
        j=n-1;
        l=0;

        while(m>l)
        {
            if(a[i]<b[j])
            {
                count=count-a[i];
                count=count+b[j];
                swap(a[i],b[j]);
            }
            i++;
            j--;
            l++;
        }
        cout<<count<<endl;

    }
    return 0;
}
