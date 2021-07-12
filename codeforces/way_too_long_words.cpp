#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,i,len;
    char f,l;
    string s;
    cin>>n;
    {
        for(i=0;i<n;i++)
        {
            cin>>s;
            len=s.size();
            if(len<=10)
              cout<<s<<endl;
            else
            {
            f=s[0];
            l=s[len-1];
            cout<<f<<len-2<<l<<endl;
            }
        }
    }

    return 0;
}
