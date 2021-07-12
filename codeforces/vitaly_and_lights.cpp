#include <iostream >
using namespace std;

int main ()
{
    int i,j,k,n,m,t,c=0,l,a[200];
    cin>>n>>m;
    l=2;

    for(k=0;k<n;k++)
    { for(t=0;t<m*2;t++)
         {
             cin>>a[t];

         }


        for(j=0;j<m*2;j=j+2)
        {
          for(i=j;i<l+j;i++)

              {
                if(a[i]!=0)
                  {
                    c++;
                    break;

                  }

              }
        }

    }

        cout<<c;

    return 0;
}
