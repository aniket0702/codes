// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n,m,k;
// 	scanf("%d%d%d",&n,&m,&k);
// 	int arr[n+1][n+1];
// 	int val[n+1];
// 	for(int i=1;i<=n;i++)
// 		scanf("%d",&val[i]);
// 	int x,y;
// 	for(int i=1;i<=m;i++)
// 	{
// 		scanf("%d %d",&x,&y);
// 		arr[x][y] = 1;	
// 		arr[y][x] = 1;
// 	}
// 	for(int i=1;i<=n;i++)
// 	{
// 		int cnt=0;
// 		vector < pair<int,int> >v;
// 		for(int j=1;j<=n;j++)
// 			{
// 				if(arr[i][j] == 1)
// 					{v.push_back( make_pair(val[j],j));cnt++;}
// 			}
// 		// for(int l =0;l<cnt;l++)
// 		// 	printf("%d %d\n",v[l].first,v[l].second );
// 		sort(v.begin(),v.end());
// 		// printf("\n");
// 		// for(int l =0;l<cnt;l++)
// 		// 	printf("%d %d\n",v[l].first,v[l].second );
// 		printf("%d\n",v[cnt-k].second );
// 		// reverse(v.begin(),v.end());
// 		//printf("%d\n",v[k].second );
// 	}

// }	



#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int ma = 1e5+5;
vector < pair <int, int > > v[1005];
int w[1005];
int main()
{
	/*freopen("si.txt","r",stdin);
	freopen("so.txt","w",stdout);*/
	//n,k = 1000
	//m = 1e6
	//w[i] = 100000
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
		cin>>w[i];
	int x,y;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		v[x].push_back(make_pair(w[y],y));
		v[y].push_back(make_pair(w[x],x));
	}
	for(int i=1;i<=n;i++)
	sort(v[i].begin(), v[i].end());
	
	for(int i=1;i<=n;i++)
	{
		if(v[i].size()>=k)
			cout<<v[i][v[i].size()-k].second<<endl;
		else
			cout<<"-1"<<endl;
	}
	return 0;
}

//Correct solution