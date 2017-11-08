#include<bits/stdc++.h>
#define lp(i,a,n) for(int (i)=(a);i<=(int)(n);(i)++)
#define lpb(i,a,n) for(int (i)=(a);i>=(int)(n);(i)--)
#define MOD 1000000007
#define readll(x) scanf("%lld",&x)
using namespace std;
typedef long long ll;
const int MAX = 100*1000 + 5;
ll a[MAX],r[MAX],l[MAX];
ll n,pEven = 1 ,pOdd  = 0, sEven = 1 , sOdd = 0, pSum , sSum;

int main(void)
{
    readll(n);
    lp(i,1,n)readll(a[i]);
    lp(i,1,n){
        pSum += a[i];
        if(pSum & 1) l[i] = pOdd,pOdd++;
        else l[i] = pEven,pEven++;
    }
    lpb(i,n,1){
        sSum += a[i];
        if(sSum & 1)r[i] = sOdd,sOdd++;
        else r[i] = sEven,sEven++;
        r[i] += r[i+1];
        r[i] %= MOD;
    }
    ll ans = 0;
    lp(i,1,n){
        ans += l[i] * r[i+1];
        ans %= MOD;
    }
    cout<<ans;
}
