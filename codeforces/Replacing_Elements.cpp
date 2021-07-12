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
       c=0;
       cin>>n>>m;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
           if(a[i]>m)
            {
                c++;
            }
       }

       if(c>0)
       {
           sort(a,a+n);

           if((a[0]+a[1])<=m)
            cout<<"YES"<<endl;
           else
            cout<<"NO"<<endl;
       }
       else
       {
           cout<<"YES"<<endl;
       }


   }

    return 0;
}
