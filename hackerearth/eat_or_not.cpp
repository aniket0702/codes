

    #include <bits/stdc++.h>
    using namespace std;

    #define MP make_pair
    #define X first
    #define Y second

    bool solve(int n, int fruits[][4], vector<int> &tar)
    {
    	if (n == 0)
    		return false;
    	if (fruits[0][0] == tar[0] && fruits[0][1] == tar[1] &&
    		fruits[0][2] == tar[2] && fruits[0][3] == tar[3])
    		return true;
    	if (solve(n - 1, fruits + 1, tar))
    		return true;
    	vector<int> newt = tar;
    	newt[0] -= fruits[0][0];
    	newt[1] -= fruits[0][1];
    	newt[2] -= fruits[0][2];
    	newt[3] -= fruits[0][3];
    	return solve(n - 1, fruits + 1, newt);
    }

    int main(void)
    {
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    	cout.tie(NULL);

    	vector<int> tar(4);
    	cin >> tar[0] >> tar[1] >> tar[2] >> tar[3];
    	int n;
    	cin >> n;
    	int fruits[n][4];
    	for (int i = 0; i < n; i++) {
    		cin >> fruits[i][0] >> fruits[i][1] >> fruits[i][2] >>
    			fruits[i][3];
    	}
    	if (solve(n, fruits, tar))
    		cout << "YES\n";
    	else
    		cout << "NO\n";

    	return 0;
    }

Language: C++14
