#include<bits/stdc++.h>
using namespace std;

void create_array(string  s,int arr[])
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
  int arr[100005];
  create_array(p,arr);
  // for(int i=0;i<p.length();i++)
  //   cout<<arr[i]<<endl;
  int i=0,j=0;
  int c = 0;
  while(i<s.length())
  {
    if(s[i] == p[j])
    {
      i++;j++;
    }
    else{
      if(arr[j-1]!=0)
      j = arr[j-1];
      else
      i++;
    }
    if(j == p.length())
      {c++;i++;j = 0;}
  }
  return c;
}
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
  string s ;
  string p ;
  cin>>p;
  cin>>s;
  string z;
  z = s+s;
  // cout<<z<<endl<<p;
  int a = pattern_search(z,p);
  // cout<<a<<endl;
  if(s == p)
    printf("%d\n",a-1 );
  else
    printf("%d\n",a );
  }
}
