#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  long long x[n];
  long long y[n];
  for(int i=0;i<n;i++)
    scanf("%lld",&x[i] );
  for(int i=0;i<n;i++)
    scanf("%lld",&y[i] );

  long long arr[n];
  for(int i=0;i<n;i++)
  {
    double c = sqrt(x[i]*x[i] + y[i]*y[i]);
    // cout<<c<<endl;
    long long a = ceil(c);
    // cout<<a<<endl;
    arr[i] = a;
  }
  sort(arr,arr+n);
  printf("%lld\n",arr[m-1] );
}
