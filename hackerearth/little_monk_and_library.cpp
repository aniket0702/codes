#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr1[n];
  int arr2[n];
  for(int i=0;i<n;i++)
    scanf("%d",&arr1[i]);
  for(int i=0;i<n;i++)
    scanf("%d",&arr2[i]);
  sort(arr1,arr1+n);
  sort(arr2,arr2+n);
  long long s = 0;
  for(int i=0;i<n;i++)
    s+=abs(arr1[i]-arr2[i]);
  cout<<s<<endl;
}
