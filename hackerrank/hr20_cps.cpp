#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ss(e) cin>>e;
#define pr(r) printf("%lld\n",r );
#define wh(w) ll w;scanf("%lld",&w);while(w--) 

int main()
{
	wh(n)
	{
		string s;
		ss(s);
		ll l = s.length();
		ll a=0,b=0,c=0,d=0;
		for(int i = 0;i<l;i++)
		{
			if(s[i] == 'a')
				a++;
			if(s[i] == 'b')
				b++;
			if(s[i] == 'c')
				c++;
			if(s[i] == 'd')
				d++;
		}	
		ll m1,m2;
		if(a!=0 && b!=0)
		{
			if(a>=b)
				m1=b;
			else
				m1=a;
		}
		else
			m1=0;	
		
		if(c!=0 &&d!=0)
		{
			if (c>=d)
			 	m2=d;
			else
				m2=c;
		}
		else
			m2=0;

		ll total= a*b+ c*d + (a*b*c*d) + m1*m2;
		total = total%1000000007;	
		pr(total);
	}

	return 0;
}