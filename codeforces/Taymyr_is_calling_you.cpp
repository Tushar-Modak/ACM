#include <iostream>
using namespace std;
int main()
{
    int i=0,j,k=0,l,a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    while(true)
    {   sum+=a;
        if(sum>c)
            break;
        else
        {

        if(sum%b==0)
            k++;
        }
    i++;
    }
    cout<<k;

    return 0;
}


