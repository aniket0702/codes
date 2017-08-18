#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  scanf("%d",&t );
  while(t--)
  {
    int arr[26]={0};
    string s;
    cin>>s;
    int l = s.length();
    for(int i=0;i<l;i++)
    {
      int a = (int )(s[i]-'a');
      arr[a]++;
    }
    int fl=0;
    for(int i=0;i<26;i++)
      if(arr[i]>1)
        {fl = 1;break;}
    if(fl)
      printf("Yes\n");
    else
      printf("No\n");

  }
}
