#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define wh(r) ll r;scanf("%lld",&r);while(r--)
#define sc(e) scanf("%lld",&e);
int main()
{
	wh(n)
	{
		ll x;
		sc(x);
		vector<ll> v;
		for(int i=0;i<x;i++)
		{
			ll y;
			sc(y);
			v.push_back(y);
		}
		sort(v.begin(),v.begin()+x);
		printf("%lld\n",(v[1]+v[0]));
	}
}