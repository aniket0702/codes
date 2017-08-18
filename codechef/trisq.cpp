#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sc(e) ll e;scanf("%lld",&e);
#define wh(w) sc(w);while(w--)
int main()
{
	wh(n)
	{
		sc(a);
		ll n = a/2 -1;
		if(n==-1)
			printf("0\n");
		else
		{
			ll s=0;
			for(int i=0;i<=n;i++)
				s+=i;
			printf("%lld\n",s);
		}

	}
	return 0;
}