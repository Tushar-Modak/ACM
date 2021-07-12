#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,l1,l2,l3,l4,m,n;
    string s1,s2,s3,s4;
    int count1=0,count2=0,a[30]={0},b[30]={0};
    //a[30]={0};
    //b[30]={0};

    cin>>s1>>s2>>s4;
    s3=s1+s2;

    l3=s3.size();
    l4=s4.size();
    //cout<<l3<<" "<<l4<<endl;
    for(i=0;i<l3;i++)
    {   //cout<<s3[i]<<" ";
        if(s3[i]>='A' && s3[i]<='Z')
            count1=s3[i]-65;
            a[count1]=a[count1]+1;
    }

   // cout<<endl;
    for(i=0;i<l4;i++)
    {   //cout<<s4[i]<<" ";
        if(s4[i]>='A' && s4[i]<='Z')
            count2=s4[i]-65;
            b[count2]=b[count2]+1;

    }
    //cout<<endl;
   // cout<<count1<<" "<<count2<<endl;

    for(j=0;j<26;j++)
    {
        //cout<<a[j]<<" "<<b[j]<<endl;
    if(a[j]!=b[j])
        {
            k=1;
            break;
        }
    }

     if(k!=1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
