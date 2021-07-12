#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,w,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>l>>w;
        if(l>w)
           {
               m=w;
               if(2*m>l)
               {
                   n=m*2;
               }
               else
               {
                   n=l;
               }

           }
        else//l is greater
           {
               m=l;
               if(2*m>w)
               {
                   n=m*2;
               }
               else
               {
                   n=w;
               }
           }

           cout<<n*n<<endl;


    }

    return 0;
}
