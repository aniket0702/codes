#include<bits/stdc++.h>
using namespace std;
// #define MOD 1000000005;
long long fib(long long n)
{
  if(n==2)
    return 2;
  else if(n==1)
    return 1;
  return (fib(n-1)%1000000005+fib(n-2)%1000000005)%1000000005;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long n;
    scanf("%lld",&n );
    long long x = fib(n+1);
    printf("%lld\n",x );
  }
}
