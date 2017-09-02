#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    int n,cnt=0;
    cin>>s>>n;
    for(int i=0;i<=s.length()-n;)
    {
      if(s[i] == '1')
        i++;
      else
      {
        cnt++;
        for(int j=i;j<i+n;j++)
        {
          if(s[j] == '1')
            s[j]= '0';
          else
            s[j] = '1';

        }
        // cout<<s<<endl;
      }
    }
    int fl=1;
    // cout<<s<<endl;
    for(int i=0;i<s.length();i++)
    {
      if(s[i] == '0')
        fl =0;
    }
    if(fl )
      printf("%d\n",cnt );
    else
      printf("-1\n" );
  }
}
