#include<bits/stdc++.h>
using namespace std;
struct node
{
  struct node * next[26];
};
int cnt ;
struct node * create_node()
{
  struct node * ptr = (struct node *)malloc(sizeof(struct node));
  for(int i=0;i<26;i++)
    ptr->next[i] = NULL;
  cnt++;
  return ptr;
}


int main()
{
  int n;
  cnt = 0;
  struct node * head = create_node();
  cin>>n;
  for(int i=0;i<n;i++)
  {
    struct node * ptr = head;
    string s;
    cin>>s;
    for(int j=0;j<s.length();j++)
    {
      if(ptr->next[s[j] - 'a']==NULL)
        ptr->next[s[j]-'a'] = create_node();
      ptr= ptr->next[s[j]-'a'];
    }
  }
  printf("%d\n",cnt);

}
