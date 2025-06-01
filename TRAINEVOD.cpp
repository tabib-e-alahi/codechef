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
        int odd = 0, even = 0;
        for(int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if(i % 2 == 0)
                even += x;
            else
                odd += x;
        }
        
        cout << max(even, odd) << "\n";
    }
    
	return 0;
}
