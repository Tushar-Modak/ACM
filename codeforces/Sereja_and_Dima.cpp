#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int i,j,k,l,m,n,t,s,d;
   long long a[100000];
   cin>>t;
   s=0;d=0;
   for(i=0;i<t;i++)
   {
       cin>>a[i];
   }
   i=0,j=t-1,l=0;
   while(i!=j)
   {
       if(a[i]>a[j])
        {
            if(l==0)
            {
                s+=a[i];
                i++;
                l=1;
            }
            else
            {
                d+=a[i];
                i++;
                l=0;
            }

        }
        else
        {
            if(l==0)
            {
                s+=a[j];
                j--;
                l=1;
            }
            else
            {
                d+=a[j];
                j--;
                l=0;
            }

        }
   }
   if(t%2==0)
   {
       d+=a[i];
   }
   else
   {
       s+=a[i];
   }

   cout<<s<<" "<<d<<endl;

    return 0;
}
