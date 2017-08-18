#include<bits/stdc++.h>
using namespace std;

#define pb push_back
vector<int> Graph[100005];

int counti =0;
bool visited[100005];
int n,m;
int T=0;
void dfs(int s)
{


visited[s] = true;
for(int i=0;i<Graph[s].size();i++)
{

if(!visited[Graph[s][i]])
{


if(T==0)
{



if( Graph[s].size() < Graph[Graph[s][i]].size()-1) counti++;
T= 1;


}
else
{

if(Graph[s].size() < Graph[Graph[s][i]].size()) counti++;
}


dfs(Graph[s][i]);
}

}
}
int main()
{

scanf("%d %d",&n,&m);
memset(visited,false,sizeof(visited));

for(int i=1;i<=m;i++)
{
int u,v;
scanf("%d%d",&u,&v);
Graph[u].pb(v);
Graph[v].pb(u);
}

for(int i=1;i<=n;i++)
{
if(!visited[i])
{
dfs(i);
}
T=0;
}
printf("%d\n",counti);
}