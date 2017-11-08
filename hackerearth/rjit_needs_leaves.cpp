#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
  {
		int n,k;
		cin>>n>>k;
		unordered_map<int, int> a;
		int ans = 0;
		int x;
		for(int i=0;i<n;i++)
    {
			cin>>x;
			if(a.find(x+1)!=a.end() and a[x+1]!=0){
				a[x+1]--;
			}
			else{
				ans++;
			}
			a[x]++;
		}
		if(ans>k){
			cout<<-1<<endl;
		}
		else{
			cout<<k-ans<<endl;
		}
	}
}
