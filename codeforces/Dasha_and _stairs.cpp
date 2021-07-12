#include <iostream>
using namespace std;
int main()
{
    int i=1,j,k,l,a,b;
    cin>>a>>b;
    if(a==0 & b==0)
    {
        cout<<"NO";
    }
    else
    {
    if(a>b)
        j=a-b;
    else
        j=b-a;

    if(j>1)
      cout<<"NO";
    else
        cout<<"YES";
    }
    return 0;
}

