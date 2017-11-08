#include<bits/stdc++.h>
using namespace std;
struct node
{
  int a;int b;int c;
};
bool comp(struct node x,struct node y)
{
  if(x.a != y.a)
    return x.a<y.a;
  else
  {
    if(x.b!=y.b)
      return x.b<y.b;
    else
      return x.c<y.c;
  }
}
int main()

{
  struct node arr[3];
  int t;
  cin>>t;
  while(t--)
  {
    for(int i=0;i<3;i++)
    {
      cin>>arr[i].a>>arr[i].b>>arr[i].c;
    }
    sort(arr,arr+3,comp);
    int fl = 0;
    for(int i=0;i<2;i++)
    {
      if(arr[i].a<=arr[i+1].a && arr[i].b<=arr[i+1].b && arr[i].c<=arr[i+1].c)
        {
          if(arr[i].a<arr[i+1].a || arr[i].b<arr[i+1].b || arr[i].c<arr[i+1].c)
            fl = 1;
          else
            {fl  = -1;break;}
        }
      else
        {fl = -1; break;}

    }
    if(fl ==1)
      cout<<"yes"<<endl;
    else
      cout<<"no"<<endl;
  }
}
