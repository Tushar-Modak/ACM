
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,summax,summin,sum;
    int t,a[10000];
    cin>>t;
    while(t--)
    {
      cin>>n;
      m=(pow(2,n));
      sum=(m*2)-2;
      k=m;
      summin=0;
      for(i=0;i<n/2;i++)
      {
          k=k/2;
          summin+=k;
      }
      summax=sum-summin;
      cout<<summax-summin<<endl;
    }

    return 0;
}
