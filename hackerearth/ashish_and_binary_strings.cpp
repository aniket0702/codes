#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<string> s;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		scanf("%d %d",&n,&m);
		string str;
		for(int i=0;i<n;++i)
		{
			cin>>str;
			s.insert(str);
		}
		if(s.size()==n)
			printf("Yes\n");
		else
			printf("No\n");
		s.clear();
	}
	return 0;
}