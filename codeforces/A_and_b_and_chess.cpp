#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l,m,sumw=0,sumb=0;
    int  q,r,b,n,p;
    char ch;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            cin>>ch;
            if(ch=='q')
            sumb+=9;
            if(ch=='r')
            sumb+=5;
            if(ch=='b')
            sumb+=3;
            if(ch=='n')
            sumb+=3;
            if(ch=='p')
            sumb+=1;

            if(ch=='Q')
            sumw+=9;
            if(ch=='R')
            sumw+=5;
            if(ch=='B')
            sumw+=3;
            if(ch=='N')
            sumw+=3;
            if(ch=='P')
            sumw+=1;

        }

    }
    if(sumw>sumb)
        cout<<"White";
    else if(sumw<sumb)
        cout<<"Black";
    else
        cout<<"Draw";



    return 0;
}
