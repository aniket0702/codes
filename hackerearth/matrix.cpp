#include<bits/stdc++.h>
using namespace std;
pair<int,int > compare(pair<int,int>p1,pair<int,int>p2)
{
  if(p1.second>p2.second)
    return p1;
  else
  return p2;
}
pair<int,int> create_seg_tree(vector < pair<int,int> > v,vector<pair<int,int> > arr,int ss,int se,int si)
{
    if(se ==ss)
    {
      arr[si] = v[ss];
      return v[ss];
    }
    int mid = (ss+se)/2;
    arr[si] = compare(create_seg_tree(v,arr,ss,mid,2*si+1),create_seg_tree(v,arr,mid+1,se,2*si+2));
    return arr[si];
}
pair<int,int> search(vector <pair<int,int> > arr,int ss,int se ,pair<int,int> p1,pair<int,int> p2,int index)
{
  if(arr[index].first>p1.first && arr[index].first<p2.first)
    return arr[index];
  if()
}

int main()
{
  int n,m;
  cin>>n>>m;
  vector < pair<int,int> > v;
  for(int i=0;i<n;i++)
  {
    int x,y;
    scanf("%d %d", &x,&y);
    v.push_back(make_pair(x,y));
  }
  sort(v.begin(),v.end());
  int x = (int)ceil(log2(n));
  vector < pair<int,int > > arr(2*pow(2,x) -1);
  create_seg_tree(v,arr,0,n-1,0);
  for(int i=0;i<m;i++)
  {
    int x1,x2,y1,y2;
    scanf("%d %d %d %d ",&x1,&y1,&x2,&y2);
  }

}
