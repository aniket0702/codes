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
  create_array(p);
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
  string s = "bfsjaniket";
  string p = "ani";
  int a = pattern_search(s,p);
  cout<<a<<endl;
}
