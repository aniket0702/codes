#include<bits/stdc++.h>
using namespace std;
int max_4(long long arr[4])
{
	int ind=0, m = arr[0];
	for(int i=0;i<4;i++)
	{
		if(arr[i]>m)
		{
			m=arr[i];
			ind = i;
		}
	}
	return ind;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int s = 0;
	int e = n-1;
	long long sum = 0;
	while(s<=e)
	{
	 	long long a[4];
	 	if(e-s > 1)
	 	{
	 	a[0] = arr[s]+arr[s+1];
	 	a[1] = arr[e]+arr[e-1];
	 	a[2] = arr[s]*arr[s+1];
	 	a[3] = arr[e]*arr[e-1];
	 	int i = max_4(a);
	 	printf("%d\n",i );
	 	if(i==0)
	 	{
	 		sum+=arr[s];
	 		s++;
	 	}
	 	else if(i == 1)
	 	{
	 		sum+=arr[e];
	 		e--;
	 	}
	 	else if( i ==2)
	 	{
	 		sum+=arr[s]*arr[s+1];
	 		s+=2;
	 	}
	 	else if(i == 3)
	 	{
	 		sum+=arr[e]*arr[e-1];
	 		e-=2;
	 	}
	 }
	 else
	 {
	 	sum+=arr[s];
	 	s++;
	 }
	}
	printf("%lld\n",sum );
}