#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	vector <int> v[n+1];
	for(int i=0;i<n-1;i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int c[n+1]={0};
	int cn;
	cin>>cn;
	for(int i=0;i<cn;i++)
	{
		int x;
		cin>>x;
		c[x] = 1;
	}
	bool vst[n+1]= {false};
	int arr[n+1]={0};
	queue <int> q;
	q.push(1);
	vst[1] = true;
	while(!q.empty())
	{
		int val = q.front();
		q.pop();
		int s  = v[val].size();
		for(int i=0;i<s;i++)
		{
			if(vst[v[val][i]] == false)
			{
				q.push(v[val][i]);
				arr[v[val][i]]= arr[val]+1;
				vst[v[val][i]] = true;
			}
		}
	}
	int m=1000000,ind;
	for(int i=1;i<n+1;i++)
		{
			if(c[i] ==1)
			{
				if(arr[i]<m)
				{
					m = arr[i];
					ind =i;
				}
			}
		}
	printf("%d\n",ind );
}