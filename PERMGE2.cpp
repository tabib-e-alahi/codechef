#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        if (x > 0)
        {
            if ((y == 0 && z >= (x - 1)) || (y > 0 && z >= x))
            {
                cout << "Yes\n";
            }
            else {
                cout << "NO\n";
            }

        }
        else
        {
            cout << "Yes\n";
        }

    }
    return 0;
}