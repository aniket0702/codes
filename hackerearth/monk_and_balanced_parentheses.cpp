#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int s[n];
	int m =0;
	int t=-1;
	int cnt =0;
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)
	{
		if(arr[i] > 0)
			{s[++t] = arr[i];}
		else if(t >= 0 && arr[i] == s[t]*(-1))
		{
			t--;
			cnt++;
			if(cnt > m)
				m = cnt;
		}
		else
		{
			t=-1;
			cnt =0;
		}
	}
	printf("%d\n",m*2 );
}
// partially solved solutions 
