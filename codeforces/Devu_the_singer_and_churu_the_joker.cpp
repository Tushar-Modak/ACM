#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l=0,m,n,c=0,a[100000];
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>k;
        l+=k;
    }
    if(l+((n-1)*10)>m)
     cout<<-1;
    else
     cout<<((n-1)*10)/5+(m-(l+((n-1)*10)))/5;

    return 0;
}
