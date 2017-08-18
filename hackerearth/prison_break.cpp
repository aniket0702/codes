#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
int n;
int arr[21][21];
bool a[21][21]={false};
void dfs(int x,int y,int n)
{
  if(x == n-1 && y==n-1)
    {cnt++;return;}
    a[x][y] = true;
  if(x>0 && arr[x-1][y]==0 && a[x-1][y]==false )
    dfs(x-1,y,n);
  if(x<n-1 && arr[x+1][y]==0 && a[x+1][y]==false)
    dfs(x+1,y,n);
  if(y>0 && arr[x][y-1]==0 && a[x][y-1]==false)
    dfs(x,y-1,n);
  if(y<n-1 && arr[x][y+1]==0 && a[x][y+1]==false)
    dfs(x,y+1,n);
  a[x][y]= false;
  return;
}
int main()
{
  int t;
  scanf("%d",&t );
  while(t--)
  {
    // int n;
    cnt =0 ;
    scanf("%d",&n );

    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
        {scanf("%d",&arr[i][j] );a[i][j]=false;}
    if (arr[0][0] == 1 || arr[n-1][n-1] == 1)
      printf("0\n" );
    else
    {
      dfs(0,0,n);
      printf("%d\n",cnt );
    }
  }
}
