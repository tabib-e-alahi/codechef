#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        int ans = n;
        
        for (int i = 0; i < n; i++)
        {
            int cnt_larger = n - (i + 1);
            int mn_time = v[i] + cnt_larger;
            if (mn_time < ans)
                ans = mn_time;
        }

        cout << ans << "\n";
    }

    return 0;
}
