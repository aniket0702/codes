#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int arr[101]= {0};
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
      int x;
      scanf("%d",&x );
      arr[x]++;
    }
    for(int i=1;i<101;i++)
    {
      if(arr[i] == 1)
        {cout<<i<<endl;break;}
    }
  }
}
