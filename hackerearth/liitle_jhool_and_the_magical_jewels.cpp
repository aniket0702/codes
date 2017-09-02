#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  scanf("%d",&n );
  while(n--)
  {
    string s;
    cin>>s;
    int arr[4]={0};
    for(int i=0;i<s.length();i++)
    {
      if(s[i]=='r')
        arr[0]++;
      if(s[i]=='u')
        arr[1]++;
      if(s[i]=='b')
        arr[2]++;
      if(s[i]=='y')
        arr[3]++;

    }
    int min = arr[0];
    for(int i=0;i<4;i++)
      if(arr[i]<min)
        min = arr[i];
    printf("%d\n",min );


  }
}
