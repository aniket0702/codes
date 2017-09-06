#include<bits/stdc++.h>
using namespace std;
// #define s(n) 		scanf("%d",&n)
// #define sc(n)  		scanf("%c",&n)
// #define wh(t)		s(t);while(t--)
// #define sl(n)       scanf("%lld",&n)
// #define mp  		make_pair 
// #define fi 			first
// #define se 			second
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		// for(int i=0;i<n;i++)
		// 	cout<<arr[i]<<" ";
		// cout<<"\n";
		// int m = arr[n-1]-a[0];
		int new_arr[(int)ceil(n/2)];
		for(int i=0;i<n/2;i++)
			new_arr[i] = arr[i]+arr[n-i-1];
		sort(new_arr,new_arr+n/2);
		int m = new_arr[n/2-1]-new_arr[0];
		cout<<m<<"\n";
		if(m == k)
			cout<<"Lucky chap!\n";
		else if(m<k)
			cout<<"Chick magnet Jhool!\n";
		else
			cout<<"No more girlfriends!\n";
	}
	
}