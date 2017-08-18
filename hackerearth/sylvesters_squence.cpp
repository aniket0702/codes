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
    long long p=1;
    long long c = 2;
    // printf("%d ", c);
    // n-=1;
    while(n--)
    {
      c=p;
      printf("%lld ",(c+1)%1000000007);
      p*=(c+1);
      p=p%1000000007;

    }
    printf("\n");
  }
}
