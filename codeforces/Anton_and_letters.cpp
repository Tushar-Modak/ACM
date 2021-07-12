#include <bits/stdc++.h>
using namespace std;
int main()
{
 int i,j,k,l,m,n,a[100000];
 string s="";
 char b[1000000];
 int c=0;

 cin.ignore();
 getline(cin,s);

 l=s.size();
 for(i=0;i<l;i++)
 {
  if((s[i]>=97) && (s[i]<=122))
  {
     // cout<<s[i]<<endl;
   a[s[i]-97]=1;
  }
 }
for(k=0;k<26;k++)
{
 if(a[k]!=0)
  c++;
}
//cout<<"size: "<<l<<endl;
cout<<c;

return 0;
}
