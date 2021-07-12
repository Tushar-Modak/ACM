#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    string s;
    int totalThreeX,totalSeqX,removedItem,flag,res;
    cin>>n;
    cin>>s;

    totalSeqX=0;
    totalThreeX=0;
    removedItem;
    flag=0;
    res=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='x')
        {
            totalSeqX++;
            if(totalSeqX==3)
            {
                totalThreeX++;
            }
            if(totalSeqX>3)
            {
                removedItem=totalSeqX-3;
                flag=1;
            }
        }
        else
        {
            totalSeqX=0;
            if(flag==1)
            {
                res+=removedItem;
                removedItem=0;
                flag=0;
            }
        }

    }
    if(flag==1)
        {
            res+=removedItem;
        }

    cout<<totalThreeX+res<<endl;

    return 0;
}
