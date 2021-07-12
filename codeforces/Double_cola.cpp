#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    string s[]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    cin>>n;
    n--;

    while(n>=5)
    {
        n-=5;
        n/=2;

    }
    cout<<s[n];
    return 0;
}
