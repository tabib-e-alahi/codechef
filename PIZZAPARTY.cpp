#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int boys = (a + 1) * 4;
    int girls = b * 3;
    int total = boys + girls;
    int pizza = total / 8;
    if(total % 8 == 0)
        cout << pizza << "\n";
    else cout << pizza + 1 << "\n";    

    return 0;
}