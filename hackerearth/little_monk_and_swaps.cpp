#include<bits/stdc++.h>
using namespace std;
int arr[100005] = {0};
long long cnt = 0;
void swap(int root)
{
	if(arr[root] == 0)
		return;

	if((arr[2 * root] > arr[2*root+1]) && (arr[2*root]!=0 && arr[2*root+1]!=0))
	{
		int temp =arr[2*root];
		arr[2*root] =arr[2*root +1];
		arr[2*root +1] = temp;
		cnt++;
	}
	printf("da\n");
	if((arr[root] < arr[(2*root)]) && (arr[2*root]!=0))
	{
		int temp =arr[2*root];
		arr[2*root] =arr[root];
		arr[root] = temp;
		printf("Y\n");
		cnt++;
	}
	if((arr[root]>arr[( 2*root +1)]) && (arr[2*root +1]!=0))
	{
		int temp =arr[2*root+1];
		arr[2*root+1] =arr[root];
		arr[root] = temp;
		cnt++;
	}	
	swap(2*root);
	swap(2*root+1);
	return;

}
int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i =1;i<=n;i++)
		scanf("%d",&arr[i]);
	for(int i =1;i<=n;i++)
		printf("%d %d\n",i,arr[i]);
	swap(1);
	printf("%lld\n",cnt );

}
// partially correct


