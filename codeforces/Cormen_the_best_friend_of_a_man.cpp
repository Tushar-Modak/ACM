#include <iostream>
using namespace std;

int main()
{
    int i,j=1,l,m,n,a[1000],maxv=0,sum=0,b[1000];
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(m>(a[i])+a[i+1])
           {
                maxv=m-(a[i]+a[i+1]);
                a[i+1]=maxv+a[i+1];
                j++;
                sum+=maxv;
                //cout<<maxv<<endl;
           }

        //cout<<"J :"<<j <<endl;
    }
    //b[0]=a[0];
   cout<<sum<<endl;
   if(maxv==0)
    for(i=0;i<n;i++)
    {
       cout<<a[i]<<" ";
    }
   else
   {
    for(i=0;i<n;i++)
    {
       cout<<a[i]<<" ";
    }
   }
    return 0;
}

