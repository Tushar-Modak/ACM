#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t,countOdd,countEven,sum;
    int a[10000];
    cin>>t;
    while(t--)
    {
        sum=0;
        countOdd=0;
        countEven=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]%2==0)
            {
                countEven++;
            }
            else
            {
                countOdd++;
            }
        }
        if(sum%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(countOdd%2!=0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                if(countOdd==0 && countEven%2!=0)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                }

            }

        }

    }

    return 0;
}
