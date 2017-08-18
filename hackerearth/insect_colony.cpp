#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  scanf("%d",&t );
  while(t--)
  {
    int n;
    scanf("%d",&n );
    int c = 0;
    int x;
    for(int i=0;i<n;i++)
    {
      scanf("%d",&x );
      if(x%2 == 1)
        c++;
    }
    if(c%2 == 1)
      printf("No\n" );
    else
      printf("Yes\n" );
  }
}
