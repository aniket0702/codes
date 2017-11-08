#include<bits/stdc++.h>
using namespace std;
int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    int n;
    cin>>n;
    long long c[n+1],l[n+1];
    for(int i=1;i<=n;i++)
      cin>>c[i];
    for(int i=1;i<=n;i++)
      cin>>l[i];
    long long mi = 1000000LL;
    long long ans = 0;
    for(int i=1;i<=n;i++)
    {
      mi = min(mi,c[i]);
      ans+=mi*l[i];
    }
    cout<<ans<<endl;
  }
  return 0;
}
