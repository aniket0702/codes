#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int l = s.length();
	int Z = ((int)(s[0])-47) * 10 + (int)s[1] -47 +12;
	if(s[8] == 'P') 
		{
			string s1 = s.substr(2,6);
			cout<<z<<s1<<endl;
		}
		else
		{
	string s1 = s.substr(0,8);
	cout<<s1<<endl;
		}

}