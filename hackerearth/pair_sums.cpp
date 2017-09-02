#include<bits/stdc++.h>
using namespace std;
int ar[1000002];
main()
{
int n,sum;
cin>>n>>sum;
for(int i=0;i<=1000001;i++)
ar[i]=0;
for(int i=1;i<=n;i++)
{
  int a;
  cin>>a;
  ar[a]++;
}
int left=0; int right=1000001;
bool ans=false;
while(left<right)
{
   if(ar[left]==0||ar[right]==0)
   {
     while(ar[left]==0)
     left++;
     while(ar[right]==0)
     right--;
   }
   if(left+right==sum&&left!=right)
   {
     ans=true; break;
   }
   else if(left+right>sum)
   right--;
   else if(left+right<sum)
   left++;

}
if(left+right==sum&&left==right&&ar[left]>1)
  ans=true;
if(ans)
cout<<"YES";
else
cout<<"NO";
}
