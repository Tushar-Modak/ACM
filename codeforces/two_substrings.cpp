#include <iostream>
#include <string>
using namespace std;

int main()
{
     int i,j,k,n,m,a,b,c=0;
     string s;
     cin>>s;
    n=s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
            i=i+1;
            m=i+1;
            for(j=m;j<n;j++)
            {
                if(s[j]=='B'&&s[j+1]=='A')
                {
                    c=1;
                    break;
                }
            }


       }
        else if(s[i]=='B' && s[i+1]=='A')
        {
            i=i+1;
            m=i+1;
            for(j=m;j<n;j++)
            {
                if(s[j]=='A'&&s[j+1]=='B')
                {
                    c=1;
                    break;
                }
            }


       }
       else
        c=0;
    }
    if(c==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

