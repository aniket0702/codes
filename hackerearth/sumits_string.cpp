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
		int fl =0;
		for(int i=0;i<n-1;i++)
		{
			// printf("%d\n",abs(int(s[i]-s[i+1])) );
			// printf("%d\n",fl );
			int c=abs(int(s[i]-s[i+1]));
			// printf("%d\n",c );
			if(c!=1 && c!=25 )
				fl =1;
		}
		if(fl ==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}