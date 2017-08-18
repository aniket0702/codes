#include<bits/stdc++.h>
using namespace std;
// int inversion(int num)
// {
//   if(num == 0)
//     return 0;
//   if( num == 1)
//     return 1;
//   int cnt;
//   for(int i=2;i<=num/2;i++)
//   {
//     if(num%i == 0 && num%(i*i) == 0)
//       return 0;
//   }
//   return 1;
// }
int main()
{
  int t;
  scanf("%d\n",&t );
  for(int i=0;i<t;i++)
  {
    int l,r;
    scanf("%d %d",&l,&r);
    int cnt =0;
    for(int j= l;j<=r;j++)
    {
      if(j == 0);
      else if (j == 1)
        cnt++;
      else
      {
        if(j%2 == 0 && j%4 == 0);
        else
        {
          int x = pow(j,0.5);
          int fl =1;
          for(int i = 3;i<=x;i++ )
          {
            if(j%i == 0 && j%(i*i) == 0)
              {fl=0;break;}
          }
          if(fl ==1)
            cnt++;
        }
      }
    }
    printf("%d\n",cnt );

  }
}
//partially correct
