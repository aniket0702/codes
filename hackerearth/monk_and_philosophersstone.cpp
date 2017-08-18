#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int a[n];
	int t=-1;
	int top =-1;
	int rear = 0;
	for(int i=0;i<n;i++)
		scanf("%d",&arr[++top]);

	int q; int x,noc=0,sum=0;
	int cnt=0;
	scanf("%d %d",&q,&x );
	char s[50];
	for(int i=0;i<q;i++)
	{
		scanf("%s",&s);
		//printf("%s\n",s );
		if(s[0] == 'H')
		{
		//	printf("y\n");
			a[++t] =arr[rear++];
			sum += a[t];
		}
		if(s[0] == 'R')
		{
		//	printf("y1");
			sum -= a[t--];
			//t--;
		}
		if(sum == x && cnt == 0)
			{noc = t+1;cnt ++;}

	}
	printf("%d\n",noc );
 }