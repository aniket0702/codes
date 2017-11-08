#include<bits/stdc++.h>
#define lp(i,a,n) for(int (i)=(a);i<=(int)(n);(i)++)
#define lpb(i,a,n) for(int (i)=(a);i>=(int)(n);(i)--)
#define MOD 1000000007
#define scl(x) scanf("%lld",&x)
#define sci(x) scanf("%d",&x)
// #define v.pb(x) v.push_back(x)
using namespace std;
typedef long long ll;
int main()
{
  int n;
  sci(n);
  int m  =0;
  int arr[1000005]={0};
  lp(i,0,1000005)arr[i] = 0;
  lp(i,1,n)
  {
    int x;
    sci(x);
    if(arr[x] == 0)
      arr[x] = i;
    else
    {
       m = max(m,(i-arr[x]));
    }
  }
  cout<<m+1<<endl;
}
