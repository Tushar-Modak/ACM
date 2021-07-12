#include <iostream>
using namespace std;
int main()
{
    int i=0,j,k=0,n,m,sum=0;
    cin>>n>>m;
    if(n%2==0)
        {
         j=n/2;
        }
        else
        {
         j=(n-1)/2;
         j+=1;
        }
        //k=j;
    while (true)
    {
        if(j%m==0)
            break;
        else
        {
         if(j==n)
         {
             j=-1;
             break;
         }
         else
         {
             j+=1;
             i++;
         }

        }
    }
    cout<<j;

    return 0;
}
