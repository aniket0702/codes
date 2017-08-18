#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,l;
  cin>>n>>l;
  for(int i=0;i<n;i++)
  {
    string s[n];
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>s[i];
      cin>>a[i];

    }
    for(int i=0;i<n;i++)
        {
          for(int j=0;j<n-i-1;j++)
          {
            if(a[j]>a[j+1])
            {
              int temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
              string f = s[j];
              s[j]=s[j+1];
              s[j+1]=f;
            }
            else if(a[j]==a[j+1])
            {
              if(s[j].compare(s[j+1]) < 0)
              {
                string f = s[j];
                s[j]=s[j+1];
                s[j+1]=f;
              }
            }
            }
          }
      for(int i=0;i<l;i++)
      {
        cout<<s[n-i-1]<<endl;
      }
      return 0;
  }
}
