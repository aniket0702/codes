#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int l = s.length();
  for(int i=0;i<l;i++)
  {
    if(i == 0)
    {
      if(s[i] == '?' && s[i+1] != 'a')
        s[i] = 'a';
      else if(s[i] == '?')
        s[i] = 'b';
    }
    else if(i==l-1)
    {
      if(s[i] == '?' && s[i-1] != 'a')
        s[i] = 'a';
      else if(s[i] == '?')
        s[i] = 'b';
    }
    else
    {
      if(s[i]=='?')
      {
        if(s[i+1]!='a' && s[i-1]!='a')
          s[i] = 'a';
        else
          s[i] ='b';
      }
    }
  }
  cout<<s<<endl;
}
