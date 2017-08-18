#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  scanf("%d %d",&n,&m );
  int arr[n][m];
  int cnt=0;
  int x;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      scanf("%d",&x );
      if (x==1)
        cnt++;
      arr[i][j]=x;
    }
  }

}
