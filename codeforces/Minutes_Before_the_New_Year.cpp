#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    int totalTime,totalHour,totalMinute;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        totalHour=23-n;
        totalMinute=60-m;

        totalTime=(totalHour*60)+(totalMinute);
        cout<<totalTime<<endl;
    }

    return 0;
}
