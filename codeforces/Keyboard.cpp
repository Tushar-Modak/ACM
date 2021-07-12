

#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int i,j,k,l,m,n,suma=0,sumb=0,sumc=0,a,b,c;
   char ch;
   string s,t ("qwertyuiop"),u ("asdfghjkl;"),v ("zxcvbnm,./");

   cin>>ch;
   cin>>s;
   l=s.size();
   //cout<<l;
   if(ch=='R')
   {
       for(i=0;i<l;i++)
       {
           for(j=0;j<10;j++)
           {


           if(s[i]==t[j])
              cout<<t[j-1];
           if(s[i]==u[j])
              cout<<u[j-1];
           if (s[i]==v[j])
              cout<<v[j-1];
           }

       }


   }
   else
   {
       for(i=0;i<l;i++)
       {
           for(j=0;j<10;j++)
           {


           if(s[i]==t[j])
              cout<<t[j+1];
           if(s[i]==u[j])
              cout<<u[j+1];
           if (s[i]==v[j])
              cout<<v[j+1];
           }

       }


   }


    return 0;
}

