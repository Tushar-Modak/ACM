#include <iostream>
using namespace std;
int main()
{
    int i,j,k,a[10][10],l,m,c=0;;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
         cin>>a[i][j];
            if(a[i][j]==1)
            {
                l=i;
                m=j;
            }
        }

    }
    if(l>=2)
        c+=l-2;
    else
        c+=2-l;

    if(m>=2)
        c+=m-2;
    else
        c+=2-m;

    cout<<c;
    return 0;
}
