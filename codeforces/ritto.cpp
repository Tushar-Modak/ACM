#include <iostream >
#include <string >
using namespace std;

int main ()
{   int i,j,k,l;
    string s;
    cin>>s;
    l=s.size();

    for(i=0;i<l;i++)
    {
        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
        {
            s[i]=s[i]-32;
        }
        else s[i]=s[i];
    }
    cout<<s<<endl;


    return 0;
}
