#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a[10000000],b[10000000];
int main()
{
    int i,j,k,l=0,m,n,c=0,s,t,maxv=0,ar=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(b,b+m);
    if(n>=m)
       {
         k=m;
         ar=0;
       }
    else
       {
         k=n;
         ar=1;
       }

       if(ar==0)
       {
        for(i=0;i<m;i++)
        {
         for(j=0;j<n;j++)
         {
        if(a[j]!=0)
        {
         s=b[i]-a[j];
            if(s<0)
                s=s*-1;
            if(s<=1)
            {
                c++;
                a[j]=0;
                b[i]=0;
                break;

            }
        }
         }
        }

       }
       else
        {
        for(i=0;i<n;i++)
        {
         for(j=0;j<m;j++)
         {
        if(b[j]!=0)
         {s=a[i]-b[j];
            if(s<0)
                s=s*-1;
            if(s<=1)
            {
                c++;
                a[i]=0;
                b[j]=0;
                break;

            }
         }
         }
        }

       }



 cout<<c;


    return 0;
}
