#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    vector <int> v[n];
    int x,y;
    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    queue <int> q;
    bool vst[n]= {false};
    q.push(0);
    vst[0] = true;
    int arr[n]={-1};
    int cnt=0;
    arr[0] = 0;
    while(!q.empty())
    {
    	int val= q.front();
    	q.pop();
    	int sz = v[val].size();
    	for(int i=0;i<sz;i++)
    	{
    		if(vst[v[val][i]] == false)
    		{
    			q.push(v[val][i]);
    			arr[v[val][i]] = arr[val]+1;
    			vst[v[val][i]] = true;
    		}
    	}

    }
    for(int i=1;i<n;i++)
    	printf("%d\n",arr[i] );
}