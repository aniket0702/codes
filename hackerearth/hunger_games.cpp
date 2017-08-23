#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  scanf("%d",&n );
  int arr[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i] );
  sort(arr,arr+n);
  int m,c;
  m = max(arr[1]-arr[0],arr[2]-arr[0]);
  for(int i=3;i<n-1;i++)
  {
    m = max(m,arr[i]-arr[i-2]);
  }
  m = max(arr[n-1]-arr[n-2],m);
  m = max(arr[n-1]-arr[n-3],m);
  printf("%d\n",m );
}
