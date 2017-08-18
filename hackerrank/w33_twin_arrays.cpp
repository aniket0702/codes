#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sc(e) scanf("%lld",&e);
#define FOR(r,w) for(int r=0;r<w;r++)

int main()
{
	ll n;
	sc(n);
	ll a[n],a1[n];
	ll b[n],b1[n];
	ll sum;
	ll min;
	ll x;
	FOR(i,n)
		{sc(x);
			a[i]=x;a1[i]=x;}
	FOR(i,n)
	{
		sc(x);
		b[i]=x;
		b1[i]=x;
	}
	min= a[0]+b[0];
	sort(a,a+n);
	sort(b,b+n);
	ll i1,i2;
	FOR(i,n)
		if(a1[i] == a[0])
		{
			i1= i;
			break;
		}
	FOR(i,n)
		if(b1[i] == b[0])
		{
			i2= i;
			break;
		}
	if(i1 != i2)	
	printf("%lld \n",(a[0]+b[0]));
	else
	{
		if(a[0]<b[0])
			printf("%lld\n",a[0]+b[1] );
		else if(a[0]>b[0])
			printf("%lld\n",a[1]+b[0]);
		else
		{
			if(a[1]>b[1])
				printf("%lld\n",a[0]+b[1] );
			else
				printf("%lld\n",a[0]+a[1] );
		}

	}
	return 0;
}