#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    cin>>t;
    int evensum;
    int oddsum;
    while(t--)
    {
        evensum=0;
        oddsum=0;
        cin>>n;
        m=n/2;
        if(m%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(i=2;i<=n;i++)
            {
                if(i%2==0)
                {
                    cout<<i<<" ";
                    evensum+=i;

                }
            }
            for(j=1;j<=n-2;j++)
            {
                if(j%2!=0)
                {
                    cout<<j<<" ";
                    oddsum+=j;
                }
            }
            cout<<evensum-oddsum<<endl;
        }

    }

    return 0;
}
