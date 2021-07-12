#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t,sum;
    cin>>t;
    while(t--)
    {
        sum=1;
        cin>>n>>m;
        j=3;
        k=m+2;
        if(n>2)
        {
           while(true)
            {
                if(n>=j && n<=k)
                {
                    break;
                }
                else
                {
                    sum++;
                    j=k+1;
                    k=k+m;
                }
            }
        cout<<sum+1<<endl;
        }
        else
        {
            cout<<1<<endl;
        }


    }

    return 0;
}
