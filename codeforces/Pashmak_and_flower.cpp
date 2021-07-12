#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int a[10000000];
int main()
{
    long long int i,j,k,l,m,n,c1=0,c2=0,s;
    cin>>n;
    j=n;
    i=0;
    while(n--)
    {
      cin>>a[i];
      i++;
    }
    sort(a,a+j);
    m=*max_element(a,a+j);
    l=*min_element(a,a+j);

    i=0,k=j;
    if(m==l)
     {

       cout<<m-l<<" "<<(j*(j-1))/2;
     }
    else

    {
    s=j;
    while(s--)
    {
         if(a[k-1]==m)
         {
             //cout<<"**"<<endl;
             c2++;
             k--;
         }

         if(a[i]==l)
         {
             //cout<<"*"<<endl;
             c1++;
             i++;
         }


    }
    cout<<m-l<<" "<<c1*c2;
    }



    return 0;
}
