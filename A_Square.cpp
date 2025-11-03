#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tests;
    if (!(cin >> tests)) return 0;
    while (tests--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        bool same = (a == b) && (b == c) && (c == d);
        cout << (same ? "YES" : "NO") << '\n';
    }
    return 0;
}
