#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j=0,k,l,m,n,a[100000];
    cin>>n;
    while(n!=0)
    {
        /*if(n<=9)
            a[j]=n;
        else
        {*/
        k=n%10;
        n=n/10;
        if(k>4)
        {
            a[j]=9-k;
            j++;
        }
        else
        {
            a[j]=k;
            j++;
        }
        //}
        //cout<<"t";
    }
    for(i=j-1;i>0;i--)
    {
        cout<<a[i];
    }
    if(a[0]>0)
        cout<<a[0];


    return 0;
}

