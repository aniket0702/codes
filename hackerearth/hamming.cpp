

    #include <bits/stdc++.h>
    using namespace std;
    const int N = 1e5 + 5;
    int n, m, dp[26];
    string s[N], ans;
    void solve()
    {
      ans = "";
      for (int i = 0;i < m;i++)
      {
        for (int j = 0;j < 26;j++) dp[j] = 0;
        int mx = 0;
        for (int j = 0;j < n;j++)
        {
          dp[s[j][i] - 'a']++;
          mx = max(mx, dp[s[j][i] - 'a']);
        }
        for (int j = 0;j < 26;j++)
        {
          if (dp[j] == mx)
          {
            ans += 'a' + j;
            break;
          }
        }
      }
    }
    int main()
    {
      ios_base::sync_with_stdio(0);
      cin >> n >> m;
      for (int i = 0;i < n;i++) cin >> s[i];
      solve();
      cout << ans << endl;
      return 0;
    }

