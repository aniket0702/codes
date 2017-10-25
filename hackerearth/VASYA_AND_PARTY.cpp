#include <bits/stdc++.h>

using namespace std;

#define MAXN 123456

#define M 1000000007

int n, m, knowledge[MAXN], visited[MAXN], maxKnowledge, countMax;
vector<int> adj[MAXN];

void dfs(int cur) {
  if (!visited[cur]) {
    visited[cur] = 1;
    if (knowledge[cur] > maxKnowledge) {
      countMax = 1;
      maxKnowledge = knowledge[cur];
    } else if (knowledge[cur] == maxKnowledge) {
      countMax++;
    }
    int n = adj[cur].size();
    for (int i = 0; i < n; i++) {
      if (!visited[adj[cur][i]]) dfs(adj[cur][i]);
    }
  }
}

int main() {
  scanf("%d%d", &n, &m);
  for (int i = 1; i <= n; i++) {
    scanf("%d", knowledge + i);
    visited[i] = 0;
  }
  for (int i = 1; i <= m; i++) {
    int u, v;
    scanf("%d%d", &u, &v);
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  long long int answer = 1L;
  for (int i = 1; i <= n; i++) {
    if (!visited[i]) {
      maxKnowledge = 0;
      countMax = 0;
      dfs(i);
      answer = ((answer % M) * (countMax % M)) % M;
    }
  }
  printf("%d\n", answer);
  return 0;
}
