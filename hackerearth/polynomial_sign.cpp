#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  scanf("%d",&n);
  long long arr[n+1];
  int x = 0;
  for(int i=0;i<=n;i++)
  {
    scanf("%lld",&arr[i]);
    if(arr[i] == 0)
      x+=1;
  }
  int z =0;
  if(x == n+1)
  {
    cout<<"0 0"<<endl;
  }
  else
  {
    int t = n;
    while(arr[t] == 0)
    t--;
    // cout<<t<<endl;
    if(t!=0)
    {
      if(t%2 == 1)
      {
      if(arr[t] < 0)
        cout<<"-1 1"<<endl;
      else  if(arr[t] > 0)
        cout<<"1 -1"<<endl;
      }
      else
      {
        if(arr[t] > 0)
          cout<<"1 1"<<endl;
        else
          cout<<"-1 -1"<<endl;
      }
    }
    else
    {
      if(arr[t] < 0)
        cout<<"-1 -1"<<endl;
      else if(arr[t] > 0)
        cout<<"1 1"<<endl;
    }
  }
}
