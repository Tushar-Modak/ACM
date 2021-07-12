#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t,boolv;
    string s;

    cin>>t;
    while(t--)
    {
        boolv=0;
        int a[26]={0};
        cin>>n;
        m=n;
        while(n--)
        {
            cin>>s;
            l=s.size();
            for(i=0;i<l;i++)
            {
                k=s[i]%97;
                a[k]++;
            }
        }

        for(i=0;i<26;i++)
        {
            if(a[i]!=0)
            {
                if(a[i]%m==0)
                {
                    boolv=1;
                }
                else
                {
                    boolv=0;
                    break;
                }
            }
        }
        if(boolv==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }


    return 0;
}
