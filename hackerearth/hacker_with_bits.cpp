#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  scanf("%d",&n );
  int arr[n];

  for (int i=0;i<n;i++)
  {
    scanf("%d",&arr[i] );

  }
  int max=0;
  int cnt;
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      int d=arr[j];
      arr[j]=arr[i];
      arr[i]=d;
      for(int k=0;k<n;)
      {
        if(arr[k]==0)
          k++;
        else
        {
          cnt =0;
          while (arr[k++]==1)
          {
            cnt++;
          }
          if(cnt>max)
            max=cnt;
        }
      }
      d=arr[j];
      arr[j]=arr[i];
      arr[i]=d;
    }
  }
  printf("%d\n",max );
  return 0;
}
