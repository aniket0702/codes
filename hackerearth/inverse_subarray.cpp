#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    ll ar[n];
    for (ll i=0;i<n ;i++ )
        cin>>ar[i];
    ll res=0;
    if(n==1)
        cout<<1<<endl;
    else{
    for(ll i=0;i<n;i++){
        for(ll j=n-1;j>i;j--){
            if(j-i+1<res)
                break;
            if(ar[i]>=ar[j]){
                res=j-i+1;
            }
        }
    }
    if(res!=0)
    cout<<res<<endl;
    else
        cout<<1<<endl;
    }
}
}
