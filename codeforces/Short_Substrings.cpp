#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        l=s.size();
        cout<<s[0];
        for(i=1;i<l;i++)
        {
            if(i%2!=0)
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }

    return 0;
}
