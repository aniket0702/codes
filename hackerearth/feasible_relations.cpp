#include<bits/stdc++.h>
using namespace std;
int cc[100000]={0};
vector <int> v[100000];
bool vis[100000] = {false};

void dfs(int i, int id)
{
  vis[i] = true;
  cc[i] = id;
  for(int j =0;j<v[i].size();j++)
  {
    int u = v[i][j];
    if(!vis[u]) dfs(u,id);
  }

}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    scanf("%d %d",&n,&m);
    int a,b;
    string r;
    for(int i=0;i<n;i++) v[i].clear();
    for(int i=0;i<n;i++) vis[i] = false;
    vector < pair<int, int > > bp;
    for(int i=0;i<m;i++)
    {
      cin>>a>>r>>b;
      --a;--b;
      if (r == "=")
      {
        v[a].push_back(b);
        v[b].push_back(a);
      }
      else
      {
        bp.push_back(make_pair(a,b));
      }
    }
    for(int i=0;i<n;i++)
    {
      if(!vis[i])
        dfs(i,i);
    }
    int fail = 0;
    for(int i=0;i<bp.size();i++)
    {
      int u = bp[i].first;
      int v= bp[i].second;
      if(cc[u]==cc[v])
        {fail =1;break;}
    }
    if (fail )
      cout<<"NO\n";
    else
      cout<<"YES\n";
  }
}
