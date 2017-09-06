#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e4 + 5;
char W[maxn], R[maxn];
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    scanf("%s%s", W, R);
    vector<int> cnt(26);
    for (int i = 0; R[i]; i++)
      cnt[R[i] - 'a']++;
    for (int i = 0; W[i]; i++)
      for (int j = 0; j < 26; j++)
        if (cnt[j] > 0)
          if (j + 'a' < W[i])
          {
            W[i] = j + 'a';
            cnt[j]--;
            break;
          }
    printf("%s\n", W);
  }
  return 0;
