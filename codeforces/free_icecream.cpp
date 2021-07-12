#include <iostream>
using namespace std;
int main()
{
  long long int i,j,k=0,s,n,m,sum;
  char c;
  cin>>m>>s;
  sum=s;
  for(i=0;i<m;i++)
  {
   cin>>c>>n;
   if(c=='+')
    sum=sum+n;
    else
     {
     if(n<=sum)
     sum=sum-n;
     else
      {sum=sum;
      k++;
     }

     }


  }
  cout<<sum<<" "<<k;




return 0;
}
