#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long int i,j,k,l,m,n,res=0;
int factorial(long long int x)
{
    if (x==0 || x==1)
        return 1;
    else
        return x*factorial(x-1);
}


int main()
{
    cin>>n>>m;
    l=min(n,m);
    long long int fact1=factorial(l);
    cout<<fact1;

}
