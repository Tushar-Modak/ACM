#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l,m,n,c0=0,c1=0,maxv=-1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        if(m==0)
        {
            c0++;
            if(c0>maxv)
                maxv=c0;

        }
        else
        {
            c1++;
            if(c0>0)
                c0--;

        }

    }
    cout<<c1+maxv;

    return 0;
}
