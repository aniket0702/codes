#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		int arr[26]={0};
		int l = s2.length();
		for(int i=0;i<l;i++)
		{
			int j =-1;
			while(s1[++j]!=s2[i]);
			arr[j]++;
		}
		for(int i=0;i<26;i++)
		{
			while(arr[i]--)
				cout<<s1[i];
		}
		cout<<"\n";
	}
}