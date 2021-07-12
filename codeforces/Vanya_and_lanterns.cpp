#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,k,l,n;
    int a[99999];
    double r,r1,maxd=0;
    cin>>n>>l;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }

    sort(a,a+n);
      for(i=n-1;i>0;i--)
    {
        if((a[i]-a[i-1])>maxd)
        maxd=a[i]-a[i-1];

    }
    //cout<<maxd<<endl;
    r1=max((a[0]-0),(l-a[n-1]));
    r=maxd/2;
    if(r1>r)
    {
        cout << fixed << showpoint;
        cout<<setprecision(10)<<r1;
    }

    else
    {
        cout << fixed << showpoint;
        cout<<setprecision(10)<<r;
    }





    return 0;
}
