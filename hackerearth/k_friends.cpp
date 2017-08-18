#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  scanf("%d",&t );
  while(t--)
  {
    int n;
    scanf("%d",&n );
    int arr[n];
    for(int i=0;i<n;i++)
      scanf("%d",&arr[i] );
    sort(arr,arr+n);
    int k;
    scanf("%d",&k );
    int sum = 0;
    for(int i = 0;i<k;i++)
      sum+=arr[i];
    sum+= (n-k)*arr[k-1];
    printf("%d\n",sum );
  }
}
