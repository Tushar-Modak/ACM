#include <iostream>
using namespace std;

int main()
{
    int i,j=0,k=0,l,m,n=0,a[100],b[105],c[5],t,sum=0;
    for(i=0;i<5;i++)
    {
    cin>>a[i];
    c[i]=0;

    }
    for(i=0;i<100;i++)
    {
        b[i]=0;
    }
     for(i=0;i<5;i++)
     {


             b[a[i]]++;

             cout<<a[i]<<" "<<b[a[i]]<<endl;
             //a[i]=0;


     }
     k=0;
     for(i=0;i<100;i++)
     {
        if(b[i]!=0)
        {

         c[k]=i*b[i];
         cout<<c[k]<<endl;
         k++;
        }
     }

     for(i=0;i<5;i++)
     {
         if(c[i]>=n)
         {
            t=c[i];
            n=c[i];
         }

     }
      for(i=0;i<5;i++)
     {
         if(c[i]!=t)
         {
            sum=sum+c[i];
         }

     }
     cout<<sum;



    return 0;
}
