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
        vector < int > v(n);
        int cnt_1 = 0, cnt_2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool isPresent = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 3 == 0)
            {
                isPresent = true;
                break;
            }
            else if (v[i] % 3 == 1)
            {
                cnt_1++;
            }
            else if (v[i] % 3 == 2)
            {
                cnt_2++;
            }
        }

        if (cnt_1 > 0 && cnt_2 > 0)
        {
            isPresent = true;
        }
        else if (cnt_1 >= 3 || cnt_2 >= 3)
        {
            isPresent = true;
        }

        cout << (isPresent ? "Yes" : "No") << "\n";
    }
    return 0;
}