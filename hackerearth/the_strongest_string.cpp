#include <bits/stdc++.h>

using namespace std;

bool vis [26 + 1];

int main()
{
    int n;
    string s;

    cin >> n >> s;
    int st = 0, en = s.length();

    while(st < en){

        int maxi_index = -1;
        char maxi = 'A';

        for(int i = st; i < en; i++){

            if(s[i] > maxi && !vis[ s[i] - 'a' ]){              // choose the last alphabetical letter

                maxi = s[i];                                    // update the maximum
                maxi_index = i;
            }
        }

        if(maxi_index == -1) break;                             // all 26 characters in the result
        cout << maxi;
        st = maxi_index + 1;                                    // update the new interval
        vis[maxi - 'a'] = true;
    }


    return 0;
}