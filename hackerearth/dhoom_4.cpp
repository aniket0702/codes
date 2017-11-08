#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100005];
    for(int i=0;i<100005;i++)
      arr[i] = -1;
    int a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    int c[n];

    for(int i =0;i<n;i++)
      cin>>c[i];
    // sort(c,c+n);
    queue < int > q;
    q.push(a);
    int j = 0;
    arr[a] = j;
    while(!q.empty())
    {
        // printf("nfasjnv");
        int x = q.front();
        q.pop();
        if(x == b)
          {break;}
        else
        {
          for(int i=0;i<n;i++)
          {
            int y = (x*c[i])%100000;
            if(arr[y] == -1)
            {
              arr[y] =arr[x]+1;
              q.push(y);
            }
          }
        }

    }
    printf("%d\n",arr[b]);
}
