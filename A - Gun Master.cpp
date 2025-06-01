#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        vector < int > a(n);
        bool close_gun = true, long_gun = false;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= d && !close_gun)
            {
                cnt++;
                close_gun = true;
                long_gun = false;
            }
            else if (a[i] > d && !long_gun)
            {
                cnt++;
                long_gun = true;
                close_gun = false;
            }
        }

        cout << cnt << "\n";

    }

    return 0;
}