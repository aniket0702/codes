#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,q;
		scanf("%d %d",&n,&q);
		int arr[n][n];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				arr[i][j] = -1;
		for(int i=0;i<q;i++)
		{
			int x,y,z;
			scanf("%d %d %d",&x,&y,&z);
			arr[x-1][y-1] = z;
		}
		int fl = 0;
		int a[n] = {-1};
		for(int i=0;i<n;i++)
			for (int j=0;j<n;j++)
			{
				if(arr[i][j]!=-1 && arr[j][i]!=-1 && arr[i][j]!=arr[j][i])
					{fl=1;break;}
				if(a[i] != -1 && a[j]!=-1)
				{
					if(arr[i][j] == 1||arr[j][i] ==1)
					{
						if(abs(a[i]-a[j])!=1)
							fl=1;
						
					}
					else
					{
						if(a[i]!=a[j])
							fl=1;
					}
				}
				else if(a[i]==-1 || a[j]==-1)
				{

				}
			}
		if(fl==0)
			printf("yes\n");
		else
			printf("no\n");
	}
}