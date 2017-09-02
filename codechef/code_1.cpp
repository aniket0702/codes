#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  scanf("%d",&t );
  while(t--)
  {
  int arr[26];
  int ch[26]={0};
  for(int i=0;i<26;i++)
    scanf("%d",&arr[i] );
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++)
  {
    ch[s[i]-'a']++;
  }
  long long sum=0;
  for(int i=0;i<26;i++)
    if(ch[i] == 0)
      sum+=arr[i];
  printf("%lld\n",sum );
  }
}
