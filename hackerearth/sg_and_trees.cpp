#include<bits/stdc++.h>
using namespace std;
int arr[100];
int rec(int x,int y)
{
  if(arr[y] == x)
    return 1;
  if (arr[y] == 1)
    return 0;
  int z = rec(x,arr[y]);
    return z;
}
int main()
{
  int n;
  cin>>n;

  for(int i=0;i<n+1;i++)
    arr[i] = i;
  for(int i=0;i<n-1;i++)
  {
    int x,y;
    int a,b;
    cin>>x>>y;
    a= min(x,y);
    b= max(x,y);
    arr[b] = a;

  }
  int q;
  cin>>q;
  for(int i=0;i<q;i++)
  {
    int x,y;
    cin>>x>>y;
    int a = max(x,y);
    int b = min(x,y);
    x = rec(a,b);
    y = rec(b,a);
    if(x==1 || y == 1)
      printf("Yes\n");
    else
      printf("No\n" );
  }


}
