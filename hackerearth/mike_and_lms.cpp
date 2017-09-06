#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l;
	string s;
	cin>>l>>s;
	int m =0;
	int ind = 0;
	for(int i=0;i<l;i++)
	{
		if(s[i]-'a'>m)
		{
			m=s[i]-'a';
			ind = i;
		}
	}
	for(int i=ind;i<l;i++)
		printf("%c",s[i] );
	printf("\n");
}