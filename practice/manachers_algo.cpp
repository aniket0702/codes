#include<bits/stdc++.h>
using namespace std;
void lps_find(string s)
{
  int n = s.length()*2+1;
  int l[n];
  l[0] = 0;
  l[1] = 1;
  int c = 1;
  int r = 2;
  int i = 0;
  int i_min = -1;
  int start = -1;
  int end = -1;
  int diff = -1;
  int maxlpslength = 0;
  int maxlpscen = 0;
  for(i=2;i<n;i++)
  {
    i_min = 2*c + 1;
    diff = r-i;
    l[i]=0;
    if(diff > 0)
      l[i] = min(l[i_min],diff);
    while((l[i]+i < n) && (i-l[i]>0) && (((i+l[i]+1)%2 == 0)|| (s[(i+l[i]+1)/2] == s[(i-l[i]-1)/2])))
      l[i]++;
      // cout<<l[i]<<endl;
    if(l[i] > maxlpslength)
    {
      maxlpslength = l[i];
      maxlpscen = i;
    }
    if(i+l[i]>r)
    {
      c = i;
      r=  i+l[i];
    }
  }
  start = (maxlpscen- maxlpslength)/2;
  end = maxlpslength-1;
  for(i=start; i<=end; i++)
        printf("%c", s[i]);
      return ;

}
int main()
{
  string  s = "abababa";
  lps_find(s);
}
