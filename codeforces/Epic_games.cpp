#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,k,l=0,m,n,a,b,gcd;
    cin>>a>>b>>k;
    n=a;
    while (k>0)
    {
        for(i=1;i<=n && i<=k;i++)
        {
         if(n%i==0 && k%i==0)
                gcd=i;


        }
        l++;
        //cout<<gcd<<endl;
        k=k-gcd;
        if(l%2!=0)
            n=b;
        else
            n=a;
        j++;
    }
    if(j%2!=0)
      cout<<0;
    else
        cout<<1;




    return 0;
}
