#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,j,k,l=0,m,n,a[99999];
    cin>>n>>m;
    for(int s=1;s<n;s++)
    {
        cin>>a[s];
    }
    j=1;
    while(i<n)
    {

        i=a[i]+i;
        //cout<<i<<endl;


        if(i==m)
        {
            l=1;
            break;
        }

    }

    if(l==1)
        cout<<"YES";
    else
        cout<<"NO";



    return 0;
}
