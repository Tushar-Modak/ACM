#include <iostream>
using namespace std;

int main()
{
    int i,j,k,l=0,m1,m2,n;
    cin>>n;
    while(n--)
    {
        cin>>m1>>m2;
        if(m1>m2)
            l=0;
        else
            l=1;
    }
    if(l==0)
        cout<<"Happy Alex";
    else
        cout<<"Poor Alex";


    return 0;
}
