#include<bits/stdc++.h>
using namespace std;
int func(map<int,int> m,int i)
{
	int x = m[i];
	m[i]-=1;
	return x;
}
int main()
{
	int n,m;
	cin>>n>>m;
	// int arr[n+1];
	int arr[10003]={0};
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		x%=m;
		arr[x]++;
	}

	long long cnt = 0;
	for(int i=0;i<=m/2;i++)
	{
		for(int j = m-1;j>m/2;j--)
		{
      bool a[10003]={false};
			if(arr[i] >0 && arr[j]>0 && arr[m-i-j] >0 && !(a[j]==true && a[m-i-j]==true ) )
			{
				map <int,int> mp;
				mp[i] = arr[i];
				mp[j] = arr[j];
				mp[m-i-j] = arr[m-i-j];
        a[j] = true;
        a[m-i-j] = true;
				cnt+=func(mp,i)*func(mp,j)*func(mp,m-i-j);
        cout<<i<<" "<<j<<" "<<cnt<<endl;
			}
		}
	}
	if(arr[0]>=3)
		cnt+=arr[0]*(arr[0]-1)*(arr[0]-2);
	cout<<cnt<<endl;

}
