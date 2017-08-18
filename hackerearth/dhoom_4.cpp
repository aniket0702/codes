

    #include <bits/stdc++.h>
    #define _ ios_base::sync_with_stdio(false);cin.tie(0);
    using namespace std;
    #define pb push_back
    #define pob pop_back
    #define pf push_front
    #define pof pop_front
    #define mp make_pair
    #define all(a) a.begin(),a.end()
    #define bitcnt(x) __builtin_popcountll(x)
    #define MOD 1000000007
    #define total 5000005
    #define Me 1000000000001
    #define NIL 0
    #define MAXN 210005
    #define EPS 1e-5
    #define INF (1<<28)
    #define pi 3.141593
    typedef unsigned long long int uint64;
    typedef long long int int64;
    int a[1005];
    int main(){
    	int owkey,reqkey,n,i;
    // 	freopen("input.txt","r",stdin);
    // 	freopen("output.txt","w",stdout);
    	cin>>owkey>>reqkey;
    	cin>>n;
    	for(i=0;i<n;i++)
    	cin>>a[i];
    	int ans[100005];
    	memset(ans,-1,sizeof(ans));
    	queue<int>q;
    	q.push(owkey);
    	ans[owkey]=0;
    	while(!q.empty()){
    		int64 val=q.front();
    		q.pop();
    		if(val==reqkey)
    		break;
    		for(i=0;i<n;i++){
    			int64 to=a[i];
    			to=to*val;
    			to%=100000;
    			if(ans[to]==-1){
    				ans[to]=ans[val]+1;
    				q.push(to);
    			}
    		}
    	}
    	printf("%d\n",ans[reqkey]);
    // 	fclose(stdout);
    	return 0;
    }

