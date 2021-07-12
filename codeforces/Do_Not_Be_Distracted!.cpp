#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;

    string s;
    char ch;
    cin>>t;
    while(t--)
    {
        int a[26]={0};
        cin>>n;
        cin>>s;
        ch=s[0];
        j=0;
        for(i=0;i<=n;i++)
        {

            if(s[i]!=ch)
            {
              k=ch%65;
              if(a[k]!=0)
                {
                    j=1;
                    break;
                }
              else
               {
                    a[k]=1;
                    ch=s[i];
               }
            }
        }
        if(j==0)
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
