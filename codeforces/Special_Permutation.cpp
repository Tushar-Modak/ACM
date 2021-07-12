#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,j,k,l,m,n,t;
    long long a[10000];

    cin>>t;
    while(t--)
    {
        cin>>n;
            l=n;
            for(i=1;i<=n;i++)
            {
                a[i]=l;
                l--;
            }

        if(n%2!=0)
        {
            k=(n/2)+1;
            swap(a[k],a[k+1]);
        }
       for(j=1;j<=n;j++)
       {

           cout<<a[j]<<" ";
       }
       cout<<endl;
    }

    return 0;
}
