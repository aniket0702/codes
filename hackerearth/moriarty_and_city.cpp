#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int cnt1=0,cnt2=0,x,y;
	for(int i=0;i<n;)
	{
		int x = i;
		while(arr[i] == 1 && i<n)
			i++;
		cnt1=max(cnt1,i-x);
		x = i;
		while(arr[i] == 0 && i<n)
			i++;
		cnt2 = max(cnt2,i-x);
	}
	printf("%d\n",max(cnt1,cnt2) );
	
}