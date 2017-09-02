#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			arr[i] = i+1;
		int x;
		if(n%2 == 1)
			x = n-1;
		else
			x = n-2;
		for(int i=0;i<x;i+=2)
		{
			int t = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = t;
		}
		int t = arr[n-1];
		arr[n-1] = arr[n-2];
		arr[n-2] = t;
		for(int i=0;i<n;i++)
		{
			printf("%d ",arr[i] );
		}
		printf("\n");
	}
}