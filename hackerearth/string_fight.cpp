#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		char c;
		string s;
		cin>>n>>c>>s;
		int tot= 0;
		for(int i=0;i<s.length();i++)
		{
			int j = i;
			int cnt =0;
			while(cnt!=n && j<s.length() )
			{
				if(s[j] == c)
					cnt++;
				j++;
				if(cnt == n)
				{
					tot++;
					while(s[j]!=c && j<s.length())
						{tot++;j++;}
					// printf("%d %c\n",tot,s[j] );
				}

			}
			if(j == s.length() && cnt <n)
				break;
		}
		printf("%d\n",tot );

	}
}