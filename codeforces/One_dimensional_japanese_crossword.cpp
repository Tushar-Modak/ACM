#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k=0,l=0,m,n,c=0;
    string s;
    cin>>n;
    int a[n]={0};

    cin>>s;

   for(i=0;i<n;i++)
    {
        if(s[i]=='B')
            {
                c++;
                if(i==n-1)
                {
                    a[k]=c;
                }
            }
        else
        {
            a[k]=c;
            k++;
            c=0;
        }
    }

    j=0;

    while(j<n)
    {
        if(a[j]!=0)
          l++;
        j++;
    }
    cout<<l<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
            cout<<a[i]<<" ";
    }
    cout<<endl;


    return 0;
}
