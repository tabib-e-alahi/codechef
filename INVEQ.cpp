#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int zero_blocks = 0, one_blocks = 0;

        for (int i = 0; i < n; ++i) {
            if (i == 0 || s[i] != s[i - 1]) {
                if (s[i] == '0') zero_blocks++;
                else one_blocks++;
            }
        }

        cout << min(zero_blocks, one_blocks) << '\n';
    }

    return 0;
}