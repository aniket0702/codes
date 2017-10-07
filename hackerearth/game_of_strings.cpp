#include<bits/stdc++.h>
using namespace std;
void create_array(string p,int arr[])
{
  int i= 1;
  arr[0] = 0;
  int j =0;
  while(i<p.length() && j<p.length())
  {
    if(p[i] == p[j])
    {
      arr[i++] = j++;
    }
    else
    {
      if(j ==0 )
        arr[i++] = 0;
      else
        j = arr[i-1];
    }
  }
}
int pattern_search(string s,string p,int arr[])
{
  int i=0,j=0;
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
    return i-j;
  }
  return -1;
}
int main()
{
  int t;
  while(t--)
  {
    string s;
    int k;
    cin>>s>>k;
    int x = 0;
    int y = s.length()-1;
    string n;
    while(s[x] == s[y])
      {n+=s[x];x++;y++;}
    
  }
}
