#include<bits/stdc++.h>
using namespace std;
int retint(char c)
{
	return (c-'a');
}
int main()
{
	int t;
	scanf("%d",&t);
	string jh = "littlejhool";
	int check[26]={0};
	for(int i=0;i<jh.size();i++)
		check[retint(jh[i])] = 1;
	// for(int i=0;i<26;i++)
	// 	cout<<check[i];
	// cout<<endl;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		// cout<<k<<endl;
		string s[n];
		for(int i=0;i<n;i++)
			cin>>s[i];
		
		vector <int> v[10];
		vector <int> h;
		for(int i=0;i<n;i++)
		{
			int sh = s[i].size();
			int arr[26]={0};
			string ch = s[i];
			for(int j=0;j<sh;j++)
			{
				arr[retint(ch[j])] = 1;
			}
			int cnt =0;
			for(int j=0;j<26;j++)
			{
				if(arr[j] == 1 && arr[j] == check[j] )
					cnt++;
			}
			// printf("%d\n",cnt );
			v[cnt].push_back(i);
			h.push_back(cnt);
		}
		int cnt=0;
		for(int i=0;i<10;i++)
		{
			int x = v[i].size();
			if (x )
			{
				for(int j =0;j<x;j++)
					if(cnt<k)
					{cout<<s[v[i][j]]<<" ";cnt++;}
			}
		}
		printf("\n");
	}
}