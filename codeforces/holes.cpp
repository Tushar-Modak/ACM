#include <iostream>
#include <string>
using namespace std;

int main ()
{  int i,n,j,k,l,c=0;
   string s;
   cin>>n;
   for(j=0;j<n;j++)
   {c=0;
       cin>>s;
       l=s.size();
       for(i=0;i<l;i++)
       {
           if((s[i]=='0')||(s[i]=='4')||(s[i]=='9')||(s[i]=='6'))
            c++;
           if (s[i]=='8')
            c=c+2;

       }
       cout<<c<<endl;


   }




    return 0;
}
