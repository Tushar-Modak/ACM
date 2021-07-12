#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,k=0,l=0,m,n,a[99999],c1=0,c2=0,c3=0,minv,a1[9999]={0},a2[9999]={0},a3[9999]={0};
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            c1++;
            a1[j]=i+1;
            j++;
        }
        else if(a[i]==2)
        {
            c2++;
            a2[k]=i+1;
            k++;
        }
        else
        {
            c3++;
            a3[l]=i+1;
            l++;
        }
    }
    m=min(c1,c2);
    minv=min(m,c3);
    cout<<minv<<endl;

    for(i=0;i<minv;i++)
    {
        cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<endl;
    }



    return 0;
}


