#include <iostream>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t,cnt;
    int a,b,c,d;
    int min1,min2,max1,max2;
    cin>>t;
    while(t--)
    {
        cnt=1;
        cin>>a>>b>>c>>d;

        if (a>b)
        {
            min1=b;
            max1=a;
        }
        else
        {
            min1=a;
            max1=b;
        }
        if (c>d)
        {
            min2=d;
            max2=c;
        }
        else
        {
            min2=c;
            max2=d;
        }

        if(max1<min2 || min1>max2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }


    return 0;
}
