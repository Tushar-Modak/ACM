#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j=0,k,l,n,m,test;
    int t,c,a[10000],p;

    cin>>t;
    while(t--)
    {
        c=0;
        i=0;
        test=0;
       cin>>n;
       while(n>10)
       {
           m=n%10;
           if(m!=0)
            {
                test++;
            }
           for(k=0;k<c;k++)
           {
              m=m*10;

           }
           a[i]=m;
           n=n/10;
           c++;
           i++;

       }
       if(c!=0)
       {
           for(k=0;k<c;k++)
           {
              n=n*10;

           }
           a[i]=n;
       }
       else
       {
           a[i]=n;
       }
       cout<<test+1<<endl;
       for(j=c;j>=0;j--)
       {
           if(a[j]!=0)
           {
               cout<<a[j]<<" ";
           }

       }
       cout<<endl;

    }


    return 0;
}

