#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  int m;
  cin>>m;
  int mn = -1;
  for(int i=0;i<m;i++)
  {
    int x;
    scanf("%d",&x);
    if(x>mn)
      mn = x;
  }
  mn+=1;
  long long sum = 0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]<mn)
      sum+=(mn-arr[i]);
  }
  cout<<sum<<endl;
}
