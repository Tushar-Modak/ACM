#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j=0,l,m,n,maxv=999999,minv=0,a[10000];
    cin>>m>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    i=0;
    while(true)
    {
        if(i+(m-1)==n)
        {
           //cout<<i+(m-1)<<endl;
           break;
        }

        else{
          minv=a[i+(m-1)]-a[i];
          //cout<<minv<<endl;
          //cout<<a[i+(m-1)]<<" "<<a[i]<<endl;
          if(minv<0)
            minv=-minv;
            else
            minv=minv;

          if(minv<=maxv)
           maxv=minv;

            }
            i++;
    }
    cout<<maxv;
    return 0;
}
/*
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j=0,l,m,n,maxv1=1,maxv2=0,a[10000];
    cin>>m>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    cout<<a[m-1]-a[0];
    //cout<<maxv2;
    return 0;

*/
