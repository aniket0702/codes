#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[150] = {0};
  string s;
  getline(cin,s);
  // cout<<s<<endl;

  for(int i=0;i<s.length();i++)
  {
    // if(s[i] != ' ')
    {int c = (int)s[i];
    arr[c]++;}
  }
  int max=0;
  char x;
  for(int i=0;i<150;i++)
  {
    if(arr[i]>max)
    {
       x = (char)i;
       max = arr[i];
    }

  }
  printf("%c %d\n",x,max );
}
