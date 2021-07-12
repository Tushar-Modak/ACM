#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l=0,n,m,a[100000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    sort(a,a+n);
    for(j=1;j<n-1;j++)
    {
        if(a[j-1]+a[j]>a[j+1])
            {
             l=1;
             break;
            }
        else
            l=0;
    }
    if(l==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

