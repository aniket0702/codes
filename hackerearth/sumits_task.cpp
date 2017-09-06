#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		string s;
		cin>>s;
		long long n = s.length();
		long long f=0,r=0,c1 =0,c2 = n-1;
		for(long long i=0;i<n;i++)
		{
			if(s[i] == 'O')
			{
				f+=i-c1;
				c1++;
			}
			if(s[n-i-1] == 'O')
				{r+=c2-(n-i-1);c2--;}
		}
		printf("%lld\n",min(r,f) );

	}
}