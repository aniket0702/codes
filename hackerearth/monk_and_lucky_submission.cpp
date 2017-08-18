#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int arr[n];
		for (int i = 0; i <n; ++i)
		{
			scanf("%d",&arr[i]);
		}
		int min=arr[0],cnt=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i] == min)
				cnt++;
			else if(arr[i] < min)
			{
				min = arr[i];
				cnt=1;
			}
			printf("%d\n",cnt );
		}
		if (cnt%2 == 0)
			cout<<"Unlucky\n";
		else
			cout<<"Lucky\n";

	}
}