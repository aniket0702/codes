#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,k;
  scanf("%d %d %d",&n,&m,&k );
  int arr[n][m];
  int cnt=0;
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      {scanf("%d",&arr[i][j] );cnt+=arr[i][j];}
  bool a[n][m] = {false};
  while(k--)
  {
    int x,y;

    scanf("%d %d",&x,&y );
    if(arr[x-1][y-1] != 0 && a[x-1][y-1]==false)
    {
    queue <int> q1;
    queue <int> q2;
    q1.push(x-1);
    q2.push(y-1);
    a[x-1][y-1]= true;
    cnt--;
    while(q1.empty()!=true)
    {
      int c = q1.front();
      int d = q2.front();
      q1.pop();
      q2.pop();
      if((c>0) && arr[c-1][d]==1 && !a[c-1][d] )
      {
        q1.push(c-1);
        q2.push(d);
        a[c-1][d] = true;cnt--;
      }
      if((c<n-1) && arr[c+1][d]==1 && !a[c+1][d] )
      {
        q1.push(c+1);
        q2.push(d);
        a[c+1][d] = true;
        cnt--;
      }
      if((d>0) && arr[c][d-1]==1 && !a[c][d-1] )
      {
        q1.push(c);
        q2.push(d-1);
        a[c][d-1] = true;
        cnt--;
      }
      if((d<m-1) && arr[c][d+1]==1 && !a[c][d+1] )
      {
        q1.push(c);
        q2.push(d+1);
        a[c][d+1] = true;cnt--;
      }

    }
    }
  printf("%d\n",cnt);
  }
}
