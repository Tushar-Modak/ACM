#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j,k,l=0,m,n;
    int a,b,c,min1,min2,a1,b1,c1=0;
    cin>>n>>a>>b>>c;
    min1=min(a,b);
    min2=min(min1,c);

    if(min1==a)
        if(min2==b)
          k=c;
        else
          k=b;
    else if(min1==b)
        if(min2==a)
          k=c;
        else
          k=b;
    else
        if(min2==a)
          k=b;
        else
          k=a;

          cout<<min1<<" "<<min2<<" "<<k<<endl;
   m=n;
   j=min2;
   l=min1;
    while(true)
    {
        a1=m/j;
        b1=m%j;
        if(b1< l)
        {
            a1-=1;
            b1+=j;
        }
        else if(b1==l || b1== k)
        {
            break;
        }
        if(a1==0)
        {
            j=min1;

        }



     c1++;
    }
    cout<<a1+1;;

    return 0;
}

