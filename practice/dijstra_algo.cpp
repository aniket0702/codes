#include<bits/stdc++.h>
using namespace std;
// #define 100 1000005;

int main()
{
	vector < pair<int ,int > > v[100];
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int x,y,w;
		cin>>x>>y>>w;
		v[x].push_back(make_pair(y,w));
		v[y].push_back(make_pair(x,w));
	}
	int dist[100];
	bool vis[100];
	memset(vis,false,sizeof(vis));
	// memset(dist,999,sizeof(dist));
	for(int i=0;i<100;i++)
		dist[i] = 10000;
	dist[1] = 0;
	cout<<dist[10]<<endl;
	multiset < pair <int, int> > s;
	s.insert(make_pair(0,1));                          // insert the source node with distance = 0

    while(!s.empty()){

        pair <int , int> p = *s.begin();        // pop the vertex with the minimum distance
        s.erase(s.begin());

        int x = p.second; int wei = p.first;
        if( vis[x] ) {cout<<"aniket";continue;}                  // check if the popped vertex is visited before
         vis[x] = true;
         cout<<"agarwal\n";

        for(int i = 0; i < v[x].size(); i++){
            int e = v[x][i].first; int w = v[x][i].second;
            	printf("%d %d\n",e,dist[x] + w );        // check if the next vertex distance could be minimized
            if(dist[x] + w < dist[e]  ){    
                dist[e] = dist[x] + w;
                s.insert(make_pair(dist[e],  e) );           // insert the next vertex with the updated distance
            }
        }
    }
    for(int i=1;i<n+1;i++)
    	printf("%d\n",dist[i] );
} 