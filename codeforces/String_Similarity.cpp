#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t,cZero,cOne;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;

        l=s.size();
        for(i=0;i<=l-n;i++)
        {
            cZero=0;
            cOne=0;
            j=i;
            k=0;
            while(k<n)
            {
                if(s[j]=='0')
                {
                    cZero++;
                }
                else
                {
                    cOne++;
                }
                j++;
                k++;
            }
            if(cZero!=0)
            {
                cout<<0;
            }
            else
            {
                cout<<1;
            }

        }
        cout<<endl;
    }

    return 0;
}
