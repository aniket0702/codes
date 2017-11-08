#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int x,y;
    scanf("%d %d",&x,&y);
    int z = 0;
    if(x == 1)
      z = 0;
    else if(x == 2)
      z = y;
    else
      z = (x-1)+2*(y-1);
    cout<<z<<endl;
  }
}
