#include <bits/stdc++.h>
using namespace std;

int main()
{
 long long int i,j,k,n,m=0;
 long long int B=0,u=0,l=0,b=0,a=0,s=0,r=0;
 long long int minv1,minv2,minv3,minv4,minv5,minv6;
 string t;
 cin>>t;
 n=t.size();
 for(i=0;i<n;i++)
 {
     //Bulbbasaur
     if(t[i]=='B')
        B++;
     if(t[i]=='u')
        u++;
     if(t[i]=='l')
        l++;
     if(t[i]=='b')
        b++;
     if(t[i]=='a')
        a++;
     if(t[i]=='s')
        s++;
     if(t[i]=='r')
        r++;

 }
 if(a<2 || u<2)
    cout<<0;
    else if(B==0 || s ==0 || r==0 || l==0)
    {
        cout<<0;
    }
 else
 {
     minv1=min(B,l);
     minv2=min(minv1,s);
     minv3=min(minv2,r);
     minv4=min(minv3,b);
     minv5=min(minv4,a/2);
     minv6=min(minv5,u/2);
     cout<<minv6;

 }

    return 0;
}


