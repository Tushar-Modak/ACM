#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,t,j,k,l,m,n,c1,c2;
    long long int sum,row,column;

    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        l=n*m;
        c1=k%n;
        c2=k/n;

        if(c1==0)
        {
            c1=n;
            j=c1-1;
            sum=m*j;

            sum=sum+c2;
            cout<<sum<<endl;
        }
        else
        {
            j=c1-1;
            sum=m*j;

            sum=sum+c2+1;
            cout<<sum<<endl;

        }

    }

    return 0;
}
