#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t,c;
    int a[100000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<n-1;i++)
        {
            int maxv=max(a[i],a[i+1]);
            int minv=min(a[i],a[i+1]);

            double dmax,dmin;
            dmax=(double)maxv;
            dmin=(double)minv;
            if((dmax/dmin)>2.0)
            {
               // cout<<"Max :"<<dmax<<" Min :"<<dmin<<endl;
                while(true)
                {
                    if((dmax/dmin)<=2.0)
                    {
                        break;
                    }
                    else
                    {
                        c++;
                        dmax=dmax/2.0;

                    }
                }
            }
        }
        cout<<c<<endl;
    }

    return 0;
}
