

    #include <bits/stdc++.h>
    /* 
     *    Always code as if the guy who ends up maintaining your code will be a
     *    violent psychopath who knows where you live.
     *       — Rick Osborne
     *           */
    using namespace std;
    #define all(v) v.begin(),v.end()
    #define read(a) freopen("a.txt","r",stdin)
    #define write(b) freopen("b.txt","w",stdout)
    #define min3(a,b,c) min(a,min(b,c))
    #define max3(a,b,c) max(a,max(b,c))
    #define min4(a,b,c,d) min(min(a,b),min(c,d))
    #define max4(a,b,c,d) max(max(a,b),max(c,d))
    #define maxall(v) *max_element(all(v))
    #define minall(v) *min_element(all(v))
    #define pb push_back
    #define mk make_pair
    #define REV(x) reverse(x.begin(),x.end())
    #define SORT(v) sort(all(v))
    #define UN(v) SORT(v), (v).earse(unique(all(v)),v.end())
    #define common(a,b) SORT(a), SORT(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
    #define uncommon(a,b) SORT(a), SORT(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())
    #define FILL(a,d) memset(a,d,sizeof(a))
    #define LL long long
    #define PI 2*acos(0.0)
    #define pi pair<int,int>
    #define MAXM 2147483647
    #define MAXML 9223372036854775807LL
    #define MODM 1000000007
    int binarySearch(vector < int > arr, int l, int r, int x) { while (l <= r){int m = l + (r-l)/2; if (arr[m] == x) return m; if (arr[m] < x) l = m + 1; else r = m - 1; return -1; }}
    LL gcd(LL a, LL b){if(a==0)return(b);else return(gcd(b%a,a));}
    LL fastpow(LL a, LL n, LL temp){if(n==0) return(1);if(n==1)return((a*temp)%MODM); if(n&1)temp=(temp*a)%MODM;return(fastpow((a*a)%MODM,n/2,temp));}
    int dist[100001];
    int visited[100001];
    int n, tme;
    struct node {
    	int i,d;
    };
    typedef struct node node;
    vector<node> v[100001];
    int bfs (int start) {
    	queue<int> q;
    	q.push(start);
    	for(int i=0;i<=n;i++){
    		visited[i]=0;
    		dist[i]=0;
    	}
    	visited[start]=1;
    	while(!q.empty()){
    		int temp = q.front();
    		q.pop();
    		for(int i=0;i<(int)v[temp].size();i++){
    			if(visited[v[temp][i].i]==0){
    				visited[v[temp][i].i]=1;
    				dist[v[temp][i].i]+=dist[temp]+v[temp][i].d;
    				q.push(v[temp][i].i);
    			}
    		}
    	}
    	return int(max_element(dist+1,dist+n+1)-dist);
    }
    int main() {
    	int u1,v1,d;
    	node temp;
    	int tc;
    	scanf("%d",&tc);
    	while(tc--){
    		scanf("%d",&n);
    		for(int i=1;i<=n;i++) {
    			v[i].clear();
    		}
    		for(int i=1;i<=n-1;i++) {
    			scanf("%d%d%d",&u1,&v1,&d);
    			temp.i = v1;
    			temp.d = d;
    			v[u1].push_back(temp);
    			temp.i = u1;
    			v[v1].push_back(temp);
    		}
    		int start = bfs(1);
    		int ans = bfs(start);
    		int finalans = dist[ans];
    		int money = 0;
    		if (finalans>100)
    			money = 100;
    		if (finalans>1000)
    			money = 1000;
    		if (finalans>10000)
    			money = 10000;
    		printf("%d %d\n",money,finalans);
    	}
    	return 0;
    }

