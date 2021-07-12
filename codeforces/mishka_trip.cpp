#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l,n,m,a[10000],b[10000],c=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    c=c+(a[0]*a[n-1]);
    for(i=0;i<n;i++)
    {
        c=c+(a[i]*a[i+1]);

    }
    cout<<c;

    return 0;
}
