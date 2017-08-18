#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n ;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
      scanf("%d",&arr[i] );
    int fl = 1;
    int a[7] = {0};
    for(int i=0;i<n/2 +1;i++)
    {
      if(arr[i] == arr[n-i-1] && (arr[i] == arr[i-1]+1 || arr[i] == arr[i-1]) && arr[i] >= 1  && arr[i]<=7)
        {fl = 1;a[arr[i]-1]++;}
      else
        {fl =0;break;}
    }
    for (int i=0;i<7;i++)
    {
      if (a[i]>0)
        fl =1;
      else
      {
        fl =0;break;
      }
    }
    if (fl ==0)
      printf("no\n" );
    else
      printf("yes\n" );
  }
}
