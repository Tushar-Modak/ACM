#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,t,sum;
    long long int a[100000];
    int countOdd,countEven;

    cin>>t;
    while(t--)
    {
        countOdd=0;
        countEven=0;
        sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]%2!=0)
            {
                countOdd++;
            }
            else
            {
                countEven++;
            }
        }

        if(sum%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(countOdd!=0 && countEven!=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

    }

    return 0;
}
