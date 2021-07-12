#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,i,flag=0,sum=0,x=0,y=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++)
        {
            if(a[i]==25)
            {
                x++;
            }
            else if(a[i]==50)
            {
                if(x>=1)
                {
                    y++;
                    x--;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
            else if(a[i]==100)
                {
                if(y>=1&&x>=1)
                {
                    y--;
                    x--;
                }
                else if(y<1&&x>2)
                {
                    x=x-3;
                }
                else
                    {
                    flag=1;
                    break;
                    }
                }
        }
	if(flag==1)
		cout<<"NO";
	else
		cout<<"YES";
}
