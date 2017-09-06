#include<bits/stdc++.h>
using namespace std;
struct node
{
	int isleaf;
	struct node * children[26];
};
struct node *create_node()
{
	struct node * temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->isleaf = 0;
	for(int i=0;i<26;i++)
		temp->children[i] = NULL;
	return temp;
}
void insert(struct node * head,string s,int val)
{
	if(head == NULL)
		head = create_node();
	struct node * ptr = head;
	int l = s.length();
	for(int i=0;i<l;i++)
	{
		int ind = (int)s[i]-(int)'a';
		// cout<<i<<" "<<s[i]<<" "<<ptr->isleaf<<endl;
		if(!ptr->children[ind])
			ptr->children[ind] = create_node();
		ptr = ptr->children[ind];
		ptr->isleaf = max(ptr->isleaf,val);
		
	}
}
int search(struct node  * head,string s)
{
	int l = s.length();
	struct node * ptr = head;
	for(int i=0;i<l;i++)
	{
		// cout<<s[i]<< " "<<endl;
		int ind = (int)s[i]-(int)'a';
		// cout<<ptr->children[ind]->isleaf<<"**\n";
		if(!ptr->children[ind])
			return -1;
		ptr = ptr->children[ind];

	}
	return ptr->isleaf;
}
int main()
{
	struct node * head;
	head = (struct node *)malloc(sizeof(struct node));
	int n,q;
	cin>>n>>q;
	for(int i=0;i<n;i++)
	{
		string s ;int val;
		cin>>s>>val;
		insert(head,s,val);
	}
	for(int i=0;i<q;i++)
	{
		string s;
		cin>>s;
		printf("%d\n",search(head,s) );
	}
}