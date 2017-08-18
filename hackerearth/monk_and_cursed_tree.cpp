#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	ll d;
	struct node * left;
	struct node * right;
};
struct node * insert(struct node *root,ll x)
{
	if(root==NULL)
	{
		struct node * temp = (struct node *)malloc(sizeof(struct node));
		temp->d = x;
		temp->right = NULL;
		temp->left = NULL;
		return temp;
	}
	else
	{
		if(root->d >= x)
			root->left = insert(root->left,x);
		else
			root->right = insert(root->right,x);
	}
	return root;
}
struct node * searchroot(struct node * root,ll l,ll r)
{
	if((root->d>=  l  && root->d< r) || (root->d<  l  && root->d>= r))
		return root;
	else
	{
		if(root->d >= l)
			root=searchroot(root->left,l,r);
		else
			root=searchroot(root->right,l,r);
	}
	return root;
}
ll searchmax(struct node *root,ll l,ll max)
{

	if(root->d >max)
		max= root->d;
	
	if(root->d == l)
		return max;
	else
	{
		
		if(root->d > l)
		{
			searchmax(root->left,l,max);
		}
		else
		{
			searchmax(root->right,l,max);	
		}
	}
}

int main()
{
	ll n;
	scanf("%lld",&n);
	ll x;
	struct node * root =NULL;
	for(ll i =0;i<n;i++)
		{scanf("%lld",&x);root=insert(root,x);}
	ll l,r;
	scanf("%lld %lld",&l,&r);
	struct node * rr=searchroot(root,l,r);
	ll max = 0;
	//printf("%d\n",rr->d );
	max=searchmax(rr,l,max);
	max=searchmax(rr,r,max);
	printf("%lld\n",max);
}
