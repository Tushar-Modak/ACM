#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int i,j,k,l,m,n,suma=0,sumb=0,sumc=0,a,b,c;
   cin>>n;
   for(i=0;i<n;i++)
   {
     cin>>a;
     suma+=a;
   }
   for(j=0;j<n-1;j++)
   {
     cin>>b;
     sumb+=b;
   }
   for(k=0;k<n-2;k++)
   {
     cin>>c;
     sumc+=c;
   }

 cout<<suma-sumb<<endl;
 cout<<sumb-sumc;


    return 0;
}

