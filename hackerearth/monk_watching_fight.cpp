#include<bits/stdc++.h>
using namespace std;
struct node
{
	int d;
	struct node * left;
	struct node * right;
};
struct node * insert(struct node *root,int x)
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
void inorder(struct node * root)
{
	if (root)
	{
		inorder(root->left);
		printf("%d\n",root->d );
		inorder(root->right);
	}
	return;
}
int height(struct node * root)
{
	if(root == NULL)
		return 0;
	int lh;
	int rh;
	lh=height(root->left);
	rh= height(root->right);
	if(lh>= rh)
		return lh+1;
	else
		return rh+1;
}

int main()
{
	int n;
	scanf("%d",&n);
	int x;
	struct node * root =NULL;
	for(int i =0;i<n;i++)
		{scanf("%d",&x);root=insert(root,x);}
	//inorder(root);
	int h= height(root);
	printf("%d\n",h );
}