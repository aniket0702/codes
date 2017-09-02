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
			scanf("%d",&arr[i]);
		int m = arr[0];int ind = 0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]<m)
			{
				m = arr[i];
				ind = i;
			}
		}
		// if(n%2 == 1)
		printf("%d\n",ind+1);
		// else
		// printf("%d\n",n-ind+1 );
	}
}