#include<bits/stdc++.h>
using namespace std;
#define sc(n) scanf("%d",&n);
int main()
{
  int n;
  sc(n);
  int arr[n];
  for(int i=0;i<n;i++)
    sc(arr[i]);
  int z = 1;
  while(z*(z+1)<2*n)
  {
    z++;
  }
  if(z*(z+1) == 2*n)
    cout<<z<<endl;
  else
    cout<<z-1<<endl;
}
