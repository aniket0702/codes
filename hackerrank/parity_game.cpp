#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],sum =0;
	for(int i=0;i<n;i++)
		{scanf("%d",&arr[i]);sum +=arr[i];}
	if(sum%2 == 0)
		printf("0\n");
	else
	{
	int fl=1;
		for(int i=0;i<n;i++)
			{if(arr[i]%2 ==1 && n>1)
				fl=0;
				break;}
		if(fl ==0)
			printf("1\n");
		else
			printf("-1\n");

	}

}