#include <bits/stdc++.h>
using namespace std;

int main()
{
 int i,j,k;
 string s,t;
 cin>>s>>t;
 if(s==t)
    cout<<-1;
 else
    cout<<max((s.size()),(t.size()));


    return 0;
}

