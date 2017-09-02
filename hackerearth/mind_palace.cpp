#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <pair<ll, pair<ll,ll> > >v[1000000];
int main()
{
  // cout<<-10%1000000<<endl;
  int n,m;
  scanf("%d %d",&n,&m );
  for(int i =0;i<n;i++)
    for(int j=0;j<m;j++)
    {
      ll x;
      scanf("%lld",&x );

      v[abs(x)%1000000].push_back(make_pair(x,make_pair(i,j)));
    }
  int q;
  scanf("%d",&q );
  while(q--)
  {
    ll  x;
    scanf("%lld",&x );
    int fl =0;
    for(int i=0;i<v[abs(x)%1000000].size();i++)
    {
      if(v[abs(x)%1000000][i].first == x)
        {printf("%lld %lld\n",v[abs(x)%1000000][i].second.first,v[abs(x)%1000000][i].second.second );fl = 1;}

    }
    if(fl==0)
      printf("-1 -1\n" );
  }
}
