#include <iostream>
using namespace std;

int main()
{
    int n,m,s,t,l,i,j,k,a,b,ar[100000],br[100000];
    cin>>k;
    for(j=1;j<=k;j++)
    {
        cin>>n>>m;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            ar[i]=l;
            br[i]=0;
        }
        for(s=0;s<m;s++)
        {
            cin>>a>>b;
            if(br[a]==0)
            {
                br[s]=a;
            }
            else
            {
                br[s]
            }
        }

    }


    return 0;
}
