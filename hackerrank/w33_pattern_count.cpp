#include<bits/stdc++.h>
using namespace std;
#define ss(e) scanf("%s",e);
#define wh(w) int w;scanf("%d",&w);while(w--)

int main()
{
	wh(x)
	{
		char s[2005];
		cin>>s;
		int cnt=0;
		int n =strlen(s);
		for(int i=0;i<n;i++)
		{
			if(s[i] == '1' && s[i+1] == '0')
			{
				i=i+1;
				while(s[i] == '0' && i<l-1)
					i=i+1;	
				printf("%c\n",s[i] );
				if(s[i] == '1')
					cnt++;
				i = i-2;

			}

		}
		printf("%d\n",cnt);
	}
}