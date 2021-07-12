#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int i,j,k,n,maxv,minv,a[99999],s=1,t=1;
  cin>>n;

  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }

  sort(a,a+n);

  minv=a[0];
  maxv=a[n-1];

  if(maxv==minv)
  {
      cout<<0;
  }
  else
  {
  for(i=1;i<n;i++)
  {
     if(minv==a[i])
       s++;
     else
        break;

  }

  for(i=n-2;i>=0;i--)
  {
     if(maxv==a[i])
       t++;
     else
        break;

  }
  if(n==1)
    cout<<0;
  else
  cout<<n-(s+t);

  }

    return 0;
}


