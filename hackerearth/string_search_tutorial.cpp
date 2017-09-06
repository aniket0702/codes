#include<bits/stdc++.h>
using namespace std;
void make_substring(int arr[],string s)
{

	int n = s.length();
	int i=1,j=0;
	for(i=1;i<n;)
	{
		if(s[i] == s[j])
			arr[i++] = ++j;
		else
		{
			if(j!=0)
			{
				j = arr[j-1];
			}
			else
			{
				arr[i] = 0;
				i++;
			}
		}
	}
	// for(int i=0;i<n;i++)
	// 	cout<<arr[i];
	// cout<<endl;
}
int kruth_algo(int arr[],string s,string s1)
{
	int x = 0;
	while(arr[x++]==0);
	int cnt=0;
	int i=0;int j=0;
	int n =s.length();
	while(j<s.length() && i < s1.length())
	{
		if(s[j] == s1[i] )
		{
			i++;j++;
		}
		if(j == s.length())
			{cnt++;j=arr[j-1];}
		else if(i<s1.length() && s[j] != s1[i])
		{
			if(j!=0)
				j=arr[j-1];
			else
				i++;
		}
		
	}
	return cnt;
}
int main()
{
	string s;
	string s2;
	cin>>s>>s2;
	int n = s.length();
	int m = s2.length();
	int arr[n]={0};
	int arr2[m]={0};
	make_substring(arr,s);
	// for(int i=0;i<n;i++)
	// 	cout<<arr[i];
	// cout<<endl;
	// make_substring(arr2,s2);
	// for(int i=0;i<m;i++)
	// 	cout<<arr2[i]<<" ";
	// cout<<endl;
	int z = kruth_algo(arr,s,s2);
	cout<<z<<endl;


}