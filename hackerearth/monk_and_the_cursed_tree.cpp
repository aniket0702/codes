#include<bits/stdc++.h>
#define lp(i,a,n) for(int (i)=(a);i<=(int)(n);(i)++)
#define lpb(i,a,n) for(int (i)=(a);i>=(int)(n);(i)--)
#define MOD 1000000007
#define scl(x) scanf("%lld",&x)
#define sci(x) scanf("%d",&x)
using namespace std;
typedef long long ll;
struct node
{
  int key;
  struct node * right;
  struct node * left;
};
struct node * new_node(int key)
{
  struct node * ptr = (struct node *)malloc(sizeof(struct node));
  ptr->key = key;
  ptr->left =NULL;
  ptr->right = NULL;
  return ptr;
}
struct node * insert(struct node * root,int key)
{
  if(root == NULL)
    return new_node(key);
  if(root->key > key)
      root->left = insert(root->left,key);
  if(root->key< key)
      root->right = insert(root->right,key);
    return root;
}
struct node *findLCA(struct node* root, int n1, int n2)
{
  if(root->key > n1 && root->key > n2)
    return findLCA(root->left,n1,n2);
  else if(root->key < n1 && root->key < n2)
    return findLCA(root->right,n1,n2);
  return root;

}
int max_in_path(struct node * root,int k)
{
  if(root->key == k)
    return (root->key);
  else if(root->key > k)
    return max(max_in_path(root->left,k),root->key);
  else if(root->key < k)
    return max(max_in_path(root->right,k),root->key);
}
int main()
{
  int n;
  sci(n);
  struct node * root = NULL;
  lp(i,0,n-1)
  {
    int x;
    sci(x);
    root = insert(root,x);
    // cout<<"Done"<<endl;
  }
  // cout<<root->key<<endl;
  int a,b;
  sci(a);sci(b);
  struct node * lca = findLCA(root,a,b);
  // cout<<lca->key<<endl;
  int mx = max(max_in_path(lca,a),max_in_path(lca,b));
  cout<<mx<<endl;

}
