#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector < string > v(n);
        set < int > s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            vector < int > fnd;
            for (int j = k - 1; j >= 0; j--)
            {
                if (v[i][j] == '1')
                    fnd.push_back(j);
            }

            if (fnd.size() == 1)
                s.insert(fnd[0]);
        }

        bool isExist = true;
        for (int i = 0; i < k; i++)
        {
            if (s.find(i) == s.end())
            {
                isExist = false;
                break;
            }
        }

        if (isExist) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}