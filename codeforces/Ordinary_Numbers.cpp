#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t,c;
    int cnt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cnt=0;
        m=1;
        c=0;
        l=0;
        k=n;
        while(k>0)
        {
            k=k/10;
            cnt++;
        }
        //cout<<cnt<<endl;
        if(n<=10)
        {
            if(n<10)
            {
                cout<<n<<endl;
            }
            else
            {
                cout<<n-1<<endl;
            }

        }
        else
        {
            for(i=0;i<cnt;i++)
            {
                m=(m*10)+1;
                for(j=1;j<=9;j++)
                {
                    //cout<<m<<endl;
                    if((j*m)<=n)
                    {
                        c++;
                    }
                    else
                    {
                        l=1;
                        break;
                    }
                }
                if(l==1)
                {
                    break;
                }
            }
            cout<<c+9<<endl;

        }

    }


    return 0;
}
