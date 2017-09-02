#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ll t;
  scanf("%lld",&t );
  while(t--)
  {
    ll n;
    scanf("%lld",&n );
    ll arr[n];
    for(ll i=0;i<n;i++)
      scanf("%lld",&arr[i] );
    ll st[n+2];
    st[0]=-1;
    ll top=0;
    // ll m;
    ll res[n]={0};
    for(ll i=0;i<n;i++)
    {
      if(i==0)
      {
        st[++top] = 0;
      }
      else
      {
        if(arr[i]<arr[st[top]])
          st[++top] = i;
        else
        {
          while(arr[st[top]]<=arr[i] && top>=0)
            {
              res[st[top]]=st[top]-st[top-1];
              top--;
            }
            st[++top] = i;
        }
      }
    }
    for(ll i=top;i>0;i--)
      res[st[i]]=st[i]-st[i-1];
    for(ll i=0;i<n;i++)
      printf("%lld ",res[i] );
    printf("\n" );
  }


}
