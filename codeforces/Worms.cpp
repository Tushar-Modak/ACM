/*#include <iostream>
using namespace std;

int main()
{
    long long int i,j,k,l=0,m,n,c=1,s=1,t=0,a[100000];
    cin>>n;
    j=0;
    for(i=1;i<=n;i++)
    {
        cin>>m;
        a[i]=m+j;
        j=m+j;

    }
    cin>>k;
    for(i=0;i<k;i++)
    {
        cin>>t;
        c=1;
        a[0]=0;
        for(j=0;j<n;j++)
        {


                if(t>=(a[j]+c) && t<=a[j+1])
                    cout<<j+1<<endl;


        }

    }


    return 0;
}*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a[10000000];
int main()
{
    int i,j,k,l=0,m,n,c=1,s,t;
    cin>>n;
    k=1;
    for(i=1;i<=n;i++)
    {
        cin>>m;
        while(m--)
        {
            a[k++]=i;
        }

    }
    cin>>s;
    while(s--)
    {
        cin>>t;
        cout<<a[t]<<endl;
    }



    return 0;
}

