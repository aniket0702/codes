#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,q;
  scanf("%d %d %d",&n,&m,&q );
  int arr[n][n]={0};
  int x,y,z;
  for(int i=0;i<m;i++)
  {
    scanf("%d %d %d",&x,&y,&z);
    arr[x][y] = z;
  }
  while(q--)
  {
    int k;
    scanf("%d",&k);
    int i,j;
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
        if(arr[i][j] == k)
          break;
    x=i;y=j;
    arr[i][j] = 0;
    

  }
}
