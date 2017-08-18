#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int fl=0;
        int n,l;
        cin>>n>>l;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d %d",&a[i],&b[i] );
        }
        /*for(int i=0;i<n;i++)
        {
          for(int j=0;j<n-i-1;j++)
          {
            if(a[j]>a[j+1])
            {
              int temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
              temp=b[j];
              b[j]=b[j+1];
              b[j+1]=temp;
            }
            }
          }*/
          for(int i=0;i<n;i++)
          {
            for(int j=i;j<n;j++)
            {
              if((b[j]-a[i])==l)
              {
                fl=1;
                break;
              }
            else if(b[j]!=a[i+1])
              break;

            }
            if(fl)
              break;

          }
          if(fl)
            printf("Yes\n");
          else
            printf("No\n");
        }
    }
