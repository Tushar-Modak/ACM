#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,l,m,n,t,a[10000];
    int countOdd,countEven;
    int test=0;
    cin>>t;
    while(t--)
    {
        countOdd=0,countEven=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2!=i%2)
            {
                if(a[i]%2==0)
                {
                    countEven++;
                }
                else
                {
                    countOdd++;
                }
            }
        }

            if(countOdd==countEven)
            {
                cout<<countOdd<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }



    }

    return 0;
}

