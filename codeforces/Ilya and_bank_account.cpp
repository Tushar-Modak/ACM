#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    int n1,n2;
    cin>>n;
    if(n>=0)
        cout<<n;
    else
    {
        n=-n;
        j=n%10;
        n1=n/10;
        l=n1%10;

        //if(j>l)
         //k=j-l;
        //else
        k=l-j;




        //                                       i=k-j;
        n2=n1-k;
        //k=n%10+l;
        //cout<<"n1 "<<n1<<" n2 "<<n2 <<endl;
        if(n1<n2)
            cout<<-n1;
        else
            cout<<-n2;

    }


    return 0;

}
