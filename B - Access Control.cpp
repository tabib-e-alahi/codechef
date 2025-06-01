#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;
        if (s[0] == '0')
            cout << "NO\n";
        else
        {
            bool isPossible = true;
            int swipe = x;
            for (int i = 1; i < n; i++)
            {
                if (s[i] == '0' && swipe <= 0)
                {
                    isPossible = false;
                    break;
                }
                else if (s[i] == '0' && swipe > 0)
                    swipe--;
                else if (s[i] == '1')
                    swipe = x;
            }

            if (isPossible) cout << "YES\n";
            else cout << "NO\n";
        }

    }

    return 0;
}