#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j=0,k,l,m,n;
    string s;
    char t[205];
    cin>>s;
    l=s.size();

    for(i=0;i<l;i++)
    {
        if(s[i]=='.')
        {
            t[j]='0';
            j++;
        }
        if(s[i]=='-')
        {
            if(s[i+1]=='.')
            {
                t[j]='1';
                j++;
                i++;
            }
            else if(s[i+1]=='-')
            {
                t[j]='2';
                j++;
                i++;
            }
        }
    }

    for(k=0;k<j;k++)
    {
        cout<<t[k];
    }



    return 0;
}
