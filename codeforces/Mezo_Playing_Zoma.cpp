#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t,c,left,right;
    string s;
    cin>>n;
    cin>>s;
    left=right=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='L')
            left++;
        else
            right++;
    }
    cout<<left+right+1<<endl;

    return 0;
}

