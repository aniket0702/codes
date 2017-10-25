#include<bits/stdc++.h>
using namespace std;
struct node
{
  struct node * next[26];
};

struct node * create_node()
{
  struct node * ptr = (struct node *) malloc(sizeof(struct node));
  for (int i=0;i<26;i++)
    ptr->next[i] = NULL;
  // cout<<"created\n";
  return ptr;
}
void create_array(string s ,struct node * ptr)
{
  int n = s.length();
  for(int i=n-1;i>=0;i--)
  {
    struct node * temp = ptr;
    for(int j = i;j<=n-1;j++)
    {
      // cout<<i<<"__"<<j<<"\n";
      if(temp->next[s[j]-'a']==NULL)
      {
        temp->next[s[j]-'a'] = create_node();
      }
      // cout<<"not required\n";
      temp = temp->next[s[j]-'a'];
    }
  }
}
int count(struct node * ptr)
{
  if(ptr == NULL)
    return 0;
    int c = 0;
  for(int i=0;i<26;i++)
  {
    if(ptr->next[i] != NULL)
      c += count(ptr->next[i]);

  }
  return 1+c;
}
int main()
{
  string s;
  struct node * ptr = create_node();
  cin>>s;
  create_array(s,ptr);
  int a = count(ptr);
  cout<<a-1<<endl;
}
