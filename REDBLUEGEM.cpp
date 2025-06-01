#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int r, b, p, q;
    cin >> r >> b >> p >> q;
    
    cout << (r * p > b * q ? r * p : b * q) << "\n";
    
	return 0;
}
