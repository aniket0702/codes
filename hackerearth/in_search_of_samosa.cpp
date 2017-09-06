#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	int cnt = 0;
	while(k>=0)
		k-=arr[cnt++];
	cout<<cnt-1<<endl;
}