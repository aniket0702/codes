#include<bits/stdc++.h>
using namespace std;
int main()
{
  priority_queue <int > q;
  int n,m;
  cin>>m>>n;
  for(int i=0;i<m;i++)
  {
    int t;
    scanf("%d",&t );
    q.push(t);

  }
  int s = 0;
  while(n--)
  {
    int x = q.top();
    s += x;
    q.pop();
    x--;
    q.push(x);

  }
  printf("%d\n",s );
}
