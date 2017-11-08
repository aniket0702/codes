#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector < int > v[100005];
ll arr[100005];
int sup[100005];
bool vis[100005] = {false};
ll dfs(int s)
{
  if(v[s].size() == 0)
    return arr[s];

    // int val = arr[s];
  for(int i=0;i<v[s].size();i++)
    {arr[s]+= dfs(v[s][i]);}
  // cout<<arr[s]<<endl;
  return arr[s];
}
ll update(ll c,int i)
{
  while(i != 0)
    {arr[i]+=c;i = sup[i];}
}
int main()
{

  bool c[100005] = {false};
  int n,m;
  cin>>n>>m;
  int arr2[100005];
  // ll ar/r[n+1];
  for(int i=1;i<n+1;i++)
    {scanf("%lld",&arr[i] );arr2[i] = arr[i];}
  int x,y;
  scanf("%d %d",&x,&y);
  v[1].push_back(max(x,y));
  c[max(x,y)] = true;
  c[1] = true;
  sup[max(x,y)] = 1;
  for(int i=0;i<n-2;i++)
  {
    scanf("%d %d",&x,&y );
    if(c[x] == true)
    {
      v[x].push_back(y);
      c[y] = true;
      sup[y] = x;

    }
    else
      {
        v[y].push_back(x);
        c[x] = true;
        sup[x] = y;
      }

  }
  dfs(1);
  // update(2,3);
  // for(int i=1;i<=5;i++)
  //   cout<<arr[i]<<endl;
    // cout<<v[1].size()
  // for(int i=0;i<v[1].size();i++)
  //   cout<<v[1][i]<<endl;
  for(int i =0 ;i<m;i++)
  {
    char c;
    cin>>c;
    if(c == 'Q')
    {
      int z;
      cin>>z;
      cout<<arr[z]<<endl;
    }
    else
    {
      int z,a;
      cin>>z>>a;
      update(z,a-arr2[z]);
    }
  }


}
