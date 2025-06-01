#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int res = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            res = res ^ v[i];
        }
        
        int mn_res = res;
        
         for(int i = 0; i < n; i++)
        {
            mn_res = min(mn_res, (res ^ v[i]));
        }
        
        cout << mn_res << "\n";
    }
    
	return 0;
}
