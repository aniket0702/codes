#include<bits/stdc++.h>
using namespace std;
int arr[100000];
void create_array(string  s)
{
  int i=1;int j=0;
  arr[0] = 0;
  while(i<s.length() && j<s.length())
  {
    if(s[i] == s[j])
    {
        arr[i++]=j++;
    }
    else
    {
      if(j == 0)
        arr[i++]=0;
      else
      {
        j = arr[i-1];
      }
	}
  }
}
int pattern_search(string s,string p)
{
    int m=-1;
    int c = 0;
  create_array(p);
  int i=0,j=0;
  while(i<s.length())
  {
      cout<<c<<endl;
      if(c>m)
        m = c;
    if(s[i] == p[j])
    {
        // print
      i++;j++;
      c++;
    }
    else{
        c=0;
      if(arr[j-1]!=0)
      j = arr[j-1];
      else
      i++;
    }

  }
  return m;
}
int main()
{
  string s ;
  string p ;
  cin>>p>>s;
  int a = pattern_search(s,p);
  cout<<a<<endl;
}
