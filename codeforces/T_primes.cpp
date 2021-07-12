#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l=1,m,n;
    scanf("%I64d",&n);
    for(i=0;i<n;i++)
    { l=1;
      scanf("%I64d",&m);
      k=sqrt(m);
      if(m>1)
      {
          if(k*k==m)
          {
              for(j=2;j*j<=k;j++)
              {
                  if(m%j==0)
                  {
                    l=0;
                    break;
                  }

              }
          }
          else
            l=0;
      }
      else
        l=0;

      if(l==0)
       printf("NO\n");
      else
       printf("YES\n");

    }

    return 0;
}

