#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,t;
    long long int a[10000],b[10000],count1,count2,count;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n;
        for(k=0;k<n;k++)
        {
            cin>>a[k];
        }
        count1=*min_element(a,a+n);
        for(k=0;k<n;k++)
        {
            cin>>b[k];
        }
        count2=*min_element(b,b+n);

        //cout<<count1<<" "<<count2<<endl;
        i=0;
        j=0;
        while(n--)
        {
            l=a[i]-count1;
            m=b[i]-count2;
            if(l>m)
            {
                count+=l;
            }
            else
            {
                count+=m;
            }
            i++;
        }
        cout<<count<<endl;
    }

    return 0;
}
