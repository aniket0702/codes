#include<bits/stdc++.h>
using namespace std;
struct node
{
	bool isleaf;
	struct node * children[26];
};
struct node * create_node()
{
	struct node * temp = (struct node *)malloc(sizeof(struct node ));
	temp->isleaf = false;
	for(int i=0;i<26;i++)
	{
		temp->children[i] = NULL;
	}
	return temp;
}
void insert(struct node * head,string s)
{
	if(head == NULL)
		head = create_node();
	int l = s.length();
	struct node * temp = head;
	for(int  i=0;i<l;i++)
	{
		int ind = (int)s[i] -(int)'a';
		if(!temp->children[ind])
			temp->children[ind] = create_node();
		temp=temp->children[ind];
	}
	temp->isleaf = true;
}
void print_out(struct node * head,string s)
{
	if(head->isleaf == true)
		cout<<s<<"\n";
	for(int i=0;i<26;i++)
	{
		if(head->children[i])
			print_out(head->children[i],s+(char)(i+int('a')));
	}
	return;
}
void search(struct node * head,string s)
{
	struct node * temp = head;
	int l = s.length();
	for(int i=0;i<l;i++)
	{
		int ind = (int )s[i]- (int)'a';
		if(!temp->children[ind])
		{
			printf("No suggestions\n");
			return;
		}
		temp=temp->children[ind];
	}
	string s1 = s;
	print_out(temp,s1);
	return;
}
char easytolower(char in){
  if(in<='Z' && in>='A')
    return in-('Z'-'z');
  return in;
} 

int main()
{
	int n;
	scanf("%d",&n);
	struct node * head;
	head = (struct node *)malloc(sizeof(struct node));
	while(n--)
	{
		string s;
		cin>>s;
		transform(s.begin(),s.end(),s.begin(),easytolower);
		int i=0;
		// while(s[i])
		// {
		// 	char c = s[i];
		// 	putchar(tolower(c));
		// 	i++;
		// }
		
		insert(head,s);
	}
	int q;
	scanf("%d",&q);
	while(q--)
	{
		string s;
		cin>>s;
		search(head,s);
	}
}