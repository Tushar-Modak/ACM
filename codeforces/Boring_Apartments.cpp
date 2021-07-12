#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,summax,summin,sum;
    string str,s;
    str="12345";
    int t,a[10000];
    cin>>t;
    while(t--)
    {
      cin>>s;
      l=s.size();
      stringstream str(s);
      str>>n; //string to int

      m=n%10;
      summax=(m-1)*10;
      summin=(l*(l+1))/2;
      sum=summax+summin;

      cout<<sum<<endl;


    }

    return 0;
}
