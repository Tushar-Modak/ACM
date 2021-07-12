#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,test;
    int a[10000];
    cin>>n;
    while(n--)
    {   test=1;
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>a[i];
        }
        sort(a,a+m);

        for(i=0;i<m-1;i++)
        {
            if(a[i+1]-a[i]>1)
                {
                    test=0;
                    break;
                }
            else
                test=1;
        }
        if(test==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;
}
