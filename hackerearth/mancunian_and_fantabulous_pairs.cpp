#include<bits/stdc++.h>
using namespace std;
#define ii pair <int , int >
int n;
int nextarr[1000005];
int prevarr[1000005];
int arr[1000005];
void makenext()
{
  stack <ii> s;
  for(int i = n-1;i>=0;i--)
  {
    nextarr[i]=i;
    while(!s.empty() && s.top().first <arr[i])
      s.pop();
    if(!s.empty())
      nextarr[i] = s.top().second;
    s.push(ii(arr[i],i));
  }
}
void makeprev()
{
  stack <ii> s;
  for(int i=0;i<n;i++)
  {
    prevarr[i] = -1;
    while(!s.empty() && s.top().first<arr[i])
      s.pop();
    if(!s.empty())
      prevarr[i] = s.top().second;
    s.push(ii(arr[i],i));
  }
}
int main()
{
  int maxi[100005];
  long long ans=0;
  scanf("%d",&n );
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i] );
  makeprev();
  makenext();
  for(int i=0;i<n;i++)
    if(nextarr[i]!=i)
      maxi[nextarr[i]-i] = max(maxi[nextarr[i]-i],i-prevarr[i]);

  for(int i=0;i<n;i++)
    ans += maxi[i];
  printf("%lld\n",ans );

}
