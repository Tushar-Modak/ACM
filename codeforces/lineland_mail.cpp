#include <iostream>
using namespace std;

int main()
{
    int i,j,k=0,l=0,m,n,s,t,a[100000],minn,maxx,x,y;
    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>a[j];
    }
    minn=a[1]-a[0];
    maxx=a[n-1]-a[0];
    cout<<minn<<" "<<maxx<<endl;


    for(i=1;i<n-1;i++)
    {
        s=a[i]-a[i-1];
        t=a[i+1]-a[i];
        if(s>=t)
        {
            minn=t;
        }
        else
        {
            minn=s;
        }
        x=a[n-1]-a[i];
        y=a[i]-a[0];
        if(x>=y)
        {
            maxx=x;
        }
        else
        {
            maxx=y;
        }
        cout<<minn<<" "<<maxx<<endl;

    }
    minn=a[n-1]-a[n-2];
    maxx=a[n-1]-a[0];
    cout<<minn<<" "<<maxx<<endl;


    return 0;
}
