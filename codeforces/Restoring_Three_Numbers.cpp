
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,a[10];
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
      sort(a,a+4);

      cout<<a[3]-a[0]<<" "<<a[3]-a[1]<<" "<<a[3]-a[2]<<endl;


    return 0;
}
