#include <bits/stdc++.h>
using namespace std;
int main()
{

vector < pair <int, int> > vect;


  long long int i,j,k,l=0,m,n,a[100000],b[100000];
    cin>>n>>m;
  for(i=0;i<m;i++)
 {
     cin>>a[i]>>b[i];
     vect.push_back(make_pair(a[i],b[i]));
 }

  sort(vect.begin(), vect.end());


      for(i=0;i<m;i++)
    {
         //cout<<"1st: "<<vect[i].first<<endl;
      if(n<=vect[i].first)
      {
        l=0;
        break;
      }
      else
      {
          //cout<<"2nd: "<<vect[i].second<<endl;
          n+=vect[i].second;
          l=1;

      }
     // cout<<n<<endl;
    }
    if(l==0)
        cout<<"NO";
    else
        cout<<"YES";

    return 0;
}
