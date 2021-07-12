#include <iostream>
using namespace std;
int main()
{
    int i=1,j,k,l,a,b;
    cin>>a>>b;
    while(true)
    {
        a=a*3;
        b=b*2;
        if(a>b)
            break;
        else
            i++;
    }
    cout<<i;

    return 0;
}
