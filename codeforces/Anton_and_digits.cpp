#include <bits/stdc++.h>
using namespace std;

int main()
{
 int i,j,n,m,minv1=0,minv2=0,v1,v2;
 int k2,k3,k5,k6;
 cin>>k2>>k3>>k5>>k6;
 if(k2==0)
    cout<<0;
 else if(k5==0 || k6 == 0)
 {
     if(k2>=k3)
        cout<<32*k3;
     else
        cout<<32*k2;


 }
 else
 {
   minv1=min(k2,k5);
   minv2=min(minv1,k6);

   v1=256*minv2;
   int l=min((k2-minv2),k3);
   v2=l*32;
   //cout<<v1<<" "<<v2<<endl;
   cout<<v1+v2;
 }
    return 0;
}


