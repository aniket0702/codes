#include<bits/stdc++.h>
using namespace std;
int sum_fun(int st[],int l ,int r,int ss,int se,int si)
{
	// cout<<l<<" "<<r<<endl;
	if (l <= ss && r >= se)
        return st[si];
 
    // If segment of this node is outside the given range
    if (se < l || ss > r)
        return 0;
	int mid = ss+(se-ss)/2;
	return (sum_fun(st,l,r,ss,mid,2*si+1)+sum_fun(st,l,r,mid+1,se,2*si+2));
}
void update(int st[],int i,int ss,int se,int diff,int si)
{
	if(i<ss || i>se)
		return ;
	st[si] = st[si]+diff;
	if(ss!=se)
	{
		int mid = ss+(se-ss)/2;
		update(st,i,ss,mid,diff,2*si+1);
		update(st,i,mid+1,se,diff,2*si+2);
	}
}
int construct_st(int arr[],int st[],int ss,int se,int si)
{
	if(ss == se)
	{
		st[si] = arr[ss];
		return arr[ss];
	}
	int mid = ss + (se-ss)/2;
	st[si]= construct_st(arr,st,ss,mid,2*si+1) + construct_st(arr,st,mid+1,se,2*si+2);
	return st[si];

}
int main()
{
	int n;
	cin>>n;
	// int arr[n];
	// for(int i=0;i<n;i++)
	// 	cin>>arr[i];
	int x = ceil(log2(6));
	int st[ 2*(int)pow(2, x) - 1]={0};

	int arr[] = {1,3,5,7,9,11};
	construct_st(arr,st,0,5,0);
	for(int i=0;i<2*(int)pow(2, x) - 1;i++)
		cout<<st[i]<<" ";
	printf("\n%d\n",sum_fun(st,1,3,0,5,0) );
	update(st,2,0,5,2,0);
	printf("\n%d\n",sum_fun(st,1,3,0,5,0) );

}