#include <iostream>
using namespace std;

int main()
{
    int n,i,j,k=0;
    cin>>n;
    while(n--)
    {
        cin>>i;

        if(i==1)
            k=1;
    }
    if(k==1)
        cout<<"HARD";
    else
        cout<<"EASY";

    return 0;
}
