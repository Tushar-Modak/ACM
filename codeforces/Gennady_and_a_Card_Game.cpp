#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m;
    string deskCard;
    string myC;

    cin>>deskCard;
    l=0;
    for(i=0;i<5;i++)
    {
        cin>>myC;
        if(deskCard[0]==myC[0] || deskCard[1]==myC[1])
        {
            l=1;
        }

    }

    if(l==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
