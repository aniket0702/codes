#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n = s.length();
		int a,b;
		cin>>a>>b;
		int cost=0;
		int fl =0;
		for(int i=0;i<n/2;i++)
		{
			if(s[i]=='/' || s[n-i-1]=='/')
			{
				if(s[i] == s[n-i-1])
					cost+=2*min(a,b);
				else if(s[i] == '/')
				{
					if(s[n-i-1] =='a')
						cost+=a;
					else
						cost+=b;
				}
				else
					{if(s[i] == 'a')
						cost+=a;
					else
						cost+=b;}

			}
			else if(s[i] != s[n-i-1])
				{fl =1;break;}
		}
		if(fl == 1)
			printf("-1\n");
		else
			printf("%d\n",cost );
	}
}