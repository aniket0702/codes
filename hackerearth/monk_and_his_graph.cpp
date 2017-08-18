#include<bits/stdc++.h>
using namespace std;
vector <int> v[100001];
bool vis[100001]={false};
int cnt =0;
void dfs(int u)
{
  vis[u] = true;

  for(int i=0;i<v[u].size();i++)
    {
      cnt++;
      if(!vis[v[u][i]])
        dfs(v[u][i]);
    }
}
int main()
{
  int n,m;
  cin>>n>>m;
  int a,b;
  for(int i=0;i<m;i++)
  {
    scanf("%d %d",&a,&b );
    v[a].push_back(b);
    v[b].push_back(a);
  }
  int max=0;
  for(int i=1;i<=n;i++)
  {
     if(!vis[i])
      {dfs(i);}
    if(cnt>max)
      max= cnt;
    // printf("%d\n",cnt);
    cnt =0;
  }
  cout<<max/2<<endl;
}
