#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i,j,k,n,m,a,b,c=0;
     string s,t;

     cin>>n;
     cin>>s>>t;
     for(i=0;i<n;i++)
     {  if(s[i]>=t[i])
      {
        a=s[i]-t[i];
        b=((9-s[i])+(t[i]+1));
        if(a>=b)
         c=c+b;
        else
         c=c+a;
      }
      else
       {
        a=t[i]-s[i];
        b=((9-t[i])+(s[i]+1));
        if(a>=b)
         c=c+b;
        else
         c=c+a;
      }


     }
     cout<<c;



return 0;
}
