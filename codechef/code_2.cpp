#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  scanf("%d",&t );
  while(t--)
  {
    long long n,num;
    scanf("%lld %lld",&n,&num );
    // printf("%lld\n",num );
    long long c = pow(2,n);
    long long pos = 0;
    for(int i=0;i<n;i++)
    {
      if (c%2 == 0)
      {
        c/=2;
      }
      else
      {
        pos  = pos + pow(2,n-i-1);
        printf("%lld\n",pos );
        c /=2;
      }
    }
    printf("%lld\n",pos );
  }
}
