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
        
        int root = sqrt(n);
        
        cout << root * root << "\n";
    }
	return 0;
}
