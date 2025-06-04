#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        
        vector < int > v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        vector < int > cost(n);
        for (int i = 0; i < n; i++)
            cin >> cost[i];

        map < int, int > mp;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(v[i]) == mp.end())
            {
                mp[v[i]] = cost[i];
            }
            else
            {
                mp[v[i]] = min(mp[v[i]], cost[i]);
            }
        }

        vector < int > mn_cost;
        for (auto p: mp)
        {
            mn_cost.push_back(p.second);
        }

        sort(mn_cost.begin(), mn_cost.end());

        int mx = 0, y = 0, x = 0;
        for (int i = 0; i < mn_cost.size(); i++)
        {
            y += mn_cost[i];
            x++;
            int val = c * x - y;
            mx = max(mx, val);
        }

        cout << mx << endl;

    }
    return 0;
}