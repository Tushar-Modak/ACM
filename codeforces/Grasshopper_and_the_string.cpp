#include <iostream>
using namespace std;

int main()
{
    int i,j=0,l,m,n,maxv1=1,maxv2=0;
    string s;
    cin>>s;
    s="B"+s+"A";
    l=s.size();
    m=0;
    for(i=1;i<l;i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]== 'Y')
            {
               maxv1=i-m;
               m=i;
            }


         if(maxv2<=maxv1)
            maxv2=maxv1;
       //if(j==0)
         //maxv2=maxv1;

        //cout<<" ->"<<maxv2<<" "<<endl;
    }
    cout<<maxv2;
    return 0;
}
