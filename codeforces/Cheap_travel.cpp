#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l,m,n,sum1=0,sum2=0,c=0,a,b;

    //for(i=0;i<14;i++)
    //{
    cin>>n>>m>>a>>b;
    if(n<m)
        sum1=b;
    else
    {
        l=n/m;
        if(n%m==0)
         sum1=b*l;
        else
        {
            if(b<=a)
                sum1=b*(l+1);
            else
                sum1=(a*(n%m))+(b*l);

        }

    }
     sum2=a*n;

    if(sum1<sum2)
        cout<<sum1;
    else
        cout<<sum2;
    //}
    return 0;
}
