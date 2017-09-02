#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define fr(i,a,b) for(ll int i=a;i<b;i++)
#define vsort(v) sort(v.begin(),v.end())
#define whl(t) while(t--)
#define vuni(vec) vec.erase( unique( vec.begin(), vec.end() ), vec.end() )

using namespace std;
//akashravi.tk

struct data
{
    int s,j,i;
};

bool compare(data s1,data s2)
{
    return s1.s<s2.s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll int t;
  //vector<ll int> ac;
    //cin>>t;
    t=1;
    while(t--)
    {

        int n,m;
        cin>>n>>m;
        int taxi[100],index[n];
        data s[n];
        fr(i,0,m)
            taxi[i]=-1;
        fr(i,0,n)
            index[i]=-1;
        fr(i,0,n){
            cin>>s[i].s>>s[i].j;
            s[i].i=i;
        }
        sort(s,s+n,compare);
        /*fr(i,0,n)
            cout<<s[i].s<<' ';
        cout<<endl;*/
        fr(i,0,n)
        {
            fr(j,0,m)
            {
                if(s[i].s>=taxi[j])
                {
                    index[s[i].i]=j+1;
                    taxi[j]=s[i].s+s[i].j;
                    break;
                }
            }
        }
        fr(i,0,n)
            cout<<index[i]<<' ';
        cout<<endl;
    }    //cout<<"\n";

    return 0;
}
