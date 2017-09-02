#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l = s.length();
		int arr[4]={0};
		int arr1[10] = {0};
		for(int i=0;i<l;i++)
		{
			int x = s[i] - 6 - 48;
			int y = s[i] - 48;
			if(x>=0)
			{
				if(arr[x] == 0)
					arr[x] = 1;
				else
					arr1[y] = 1;
			}
			else
				arr1[y] = 1;
		}
		int a[26] = {0};
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				if(i!=j && arr[i] == 1 && arr[j] == 1)
				{
					int x = (i+6)*10+j+6;
					int y = (j+6)*10 + i+6;
					// cout<<x<<" "<<y<<endl;
					if(x>=65 && x<=90)
					a[x-65] = 1;
					if(y>=65 && y<=90)
					a[y-65] = 1;
				}
			}
		}
		for(int i = 0;i<4;i++)
		{
			for(int j=0;j<10;j++)
			{
				if(arr[i] == 1 && arr1[j] == 1)
				{
					int x = (i+6)*10 + j;
					// cout<<x<<endl;
					if(x>=65 && x<=90)
						a[x-65] = 1;
				}
			}
		}
		for(int i=0;i<26;i++)
			if(a[i] == 1)
				printf("%c",(i+65) );
		printf("\n");
	}

}