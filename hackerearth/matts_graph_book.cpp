#include<bits/stdc++.h>
using namespace std;
bool vis[100001] = {false};
vector <int> v[100001];
int cnt=0;
int dfs(int u )
{
  vis[u] = true;
  cnt+=1;
  for(int i=0;i<v[u].size();i++)
    if(!vis[v[u][i]])
      dfs(v[u][i]);
}
int main()
{
  int n,m;
  cin>>n>>m;
  // int arr[n][n];
  int a,b;
  for(int i=0;i<m;i++)
  {
    scanf("%d %d",&a,&b);
    v[a].push_back(b);
    v[b].push_back(a);
  }
  int c;
  scanf("%d",&c);
  v[c].clear();
  dfs(1);
  // printf("%d\n",cnt );
  if(cnt>=(n))
    printf("Connected\n");
  else
    printf("Not Connected\n" );

}
