#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long arr[3];
  cin>>arr[1]>>arr[2]>>arr[0];
  sort(arr,arr+3);
  long long s = arr[1];
  long long x = arr[2]-arr[1];
  if(x%2 == 0)
    s+=(x/2);
  else
    s+=((x+1)/2);
  printf("%lld\n",s );
}
