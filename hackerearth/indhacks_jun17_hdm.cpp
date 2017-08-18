
// Wrong solution

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sc(e) int e;scanf("%d",&e);
#define wh(w) while(w--)

int factors(int);
int isprime(int,int);
int main()
{
	sc(n);
	sc(q);
	int a[n];
	// ll x;
	int fl;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	wh(q)
	{
		sc(x);
		int i=0;
		int y=x;
		for( i=0;i<n;i++)
		{
			x=y;
			if(x%a[i] == 0)
			{
				while(x%a[i] == 0)
					x/=a[i];
				fl=factors(x);
			
				if(fl == 0)
					printf("NO\n");
				else
					printf("YES\n");
				break;
			}

		}
		if(i == n)
			printf("NO\n");
	}
}

int factors(int x)
{
	int y=0;
	int fl=0 ;
	for(int i=2;i<=(x/2 + 1);i++)
	{
		if(x%i == 0)
		{ 
			y=x/i;
			//printf("%d %d\n",i,y );
			fl=isprime( i, y);
			return fl;
		}
	}	
}
 
int isprime(int x,int y)
{
	int cnt=0;
	for(int i=2;i<x/2;i++)
	{
		if(x%i ==0)
			{cnt++;break;}
	}
	if(cnt == 0)
	{
		for(int i=2;i<y/2;i++)
		{
			if(y%i == 0)
				{cnt++;break;}
		}
	}
	if(cnt!=0)
		return 0;
	else 
		return 1;
}