#include<bits/stdc++.h>
using namespace std;
// long long sum;
int arr[10][10];
int rec(int x[],int y[],int a,int b,int r,int c,int n,int cnt,int sum)
{
  // printf("%d\n",arr[a][b] );
  // sum+=arr[a][b];
  if(cnt>=n)
    return arr[a][b];
  else
  {
    int e[n]={0},f[n]={0},g[n]={0},h[n]={0};
    for(int i=0;i<n;i++)
    {
      if(x[i]+a<r && y[i]+b<c)
        e[i] = rec(x,y,a+x[i],b+y[i],r,c,n,cnt+1,sum);
      if(x[i]+a<r && b-y[i]>=0)
        f[i] = rec(x,y,a+x[i],b-y[i],r,c,n,cnt+1,sum);
      if(a-x[i]>=0 && y[i]+b<c)
        g[i] = rec(x,y,a-x[i],b+y[i],r,c,n,cnt+1,sum);
      if(a-x[i]>=0 && b-y[i]>=0)
        h[i] = rec(x,y,a-x[i],b-y[i],r,c,n,cnt+1,sum);

    }
    int max=0;
    for(int i=0;i<n;i++)
    {
      if(e[i]>max)
        max = e[i];
      if(f[i]>max)
        max = f[i];
      if(h[i]>max)
        max = h[i];
      if(g[i]>max)
        max = g[i];
    }
    // printf("%d\n",max );
    return max+arr[a][b];
  }
}
int main()
{
  int t;
  scanf("%d",&t );
  while(t--)
  {
    int r,c,n;
    int sum = 0;
    scanf("%d %d %d",&r,&c,&n );
    int x[n];
    int y[n];
    int a,b;
    scanf("%d %d",&a,&b );
    for(int i=0;i<n;i++)
    {
      scanf("%d",&x[i] );
    }
    for(int i=0;i<n;i++)
    {
      scanf("%d",&y[i] );
    }
    for(int i=0;i<r;i++)
      for(int j=0;j<c;j++)
        scanf("%d",&arr[i][j] );
    sum=rec(x,y,a,b,r,c,n,0,0);
    printf("%d\n",sum );
  }
}
