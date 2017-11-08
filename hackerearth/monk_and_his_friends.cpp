#include<bits/stdc++.h>
#define lp(i,a,n) for(int (i)=(a);i<=(int)(n);(i)++)
#define lpb(i,a,n) for(int (i)=(a);i>=(int)(n);(i)--)
#define MOD 1000000007
#define scl(x) scanf("%lld",&x)
#define sci(x) scanf("%d",&x)
using namespace std;
typedef long long ll;
int main()
{
  int t;
  sci(t);
  while(t--)
  {
    ll n,m;

    scl(n);scl(m);
    map <ll,int> mp;
    lp(i,0,n-1)
    {
      ll x;
      scl(x);
      mp[x] = 1;
    }
    lp(i,0,m-1)
    {
      ll x;
      scl(x);
      if(mp[x] == 1)
        printf("YES\n" );
      else
      {
        printf("NO\n" );
        mp[x] = 1;
      }
    }

  }
}
