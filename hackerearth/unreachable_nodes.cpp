#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	std::vector<int > v[n+1];
	bool vis[n+1] = {false};
	for(int i=0;i<m;i++)
	{
		int x ,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int head;
	cin>>head;
	stack<int> s;
	s.push(head);
	vis[head] = true;
	while(!s.empty())
	{
		int x = s.top();
		s.pop();
		for(int i=0;i<v[x].size();i++)
		{
			if(vis[v[x][i]] == false)
				{s.push(v[x][i]);vis[v[x][i]] = true;}
		}
	}
	int c=0;
	for(int i=1;i<n+1;i++)
		if(vis[i] == false)
			c++;
	cout<<c<<endl;
}