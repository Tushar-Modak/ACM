#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,t,maxval,minval,sum;
    int c=0;
    int a[10];

    cin>>t;
    while(t--)
    {
        sum=0;
        for(i=0;i<4;i++)
        {
            cin>>a[i];
        }
        sort(a,a+3);
        maxval=a[2];
        sum=((a[2]-a[0])+(a[2]-a[1]));
        minval=a[3]-sum;
        if(minval<0 || minval%3!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }


    }
    return 0;
}
