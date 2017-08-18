    #include<bits/stdtr1c++.h>
    using namespace std;
    typedef long long int ll;
    #define mem(x,val)          memset(x,val,sizeof(x))
    #define forall(i,a,b)       for(ll i=a;i<b;i++)
    #define pb(a)               push_back(a)
    #define mp(a,b)             make_pair(a,b)
    const ll maxmod=1e9+7;
    int level[100001];
    bool visit[100001];
     
    int main(){
    ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int t;
     cin>>t;
     while(t--){
     int N,E,u,v;
     cin>>N>>E;
    vector<int>graph[N+1];
     
     mem(visit,false);
     for(int i=1;i<=E;i++)
        cin>>u>>v,graph[u].push_back(v),graph[v].push_back(u);
     
         queue<int>q;
     
        q.push(1);
       visit[1]=true;
     
       while(!q.empty()){
     
        int node=q.front();
        q.pop();
        int sz=graph[node].size();
        for(int i=0;i<sz;i++){
            if(!visit[graph[node][i]])
                visit[graph[node][i]]=true,level[graph[node][i]]=level[node]+1,q.push(graph[node][i]);
        }
       }
     
    cout<<level[N]<<endl;
    }
    }