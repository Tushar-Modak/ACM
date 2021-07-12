#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n+n<=m)
        {
            cout<<n<<" "<<n+n<<endl;

        }
        else
        {
            cout<<-1<<" "<<-1<<endl;
        }
    }

    return 0;
}
