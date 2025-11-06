#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T; 
    if (!(cin >> T)) return 0;
    while (T--) {
        int n; 
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        long long x; 
        cin >> x;

        if (n == 1) {
            cout << (a[0] == x ? "YES\n" : "NO\n");
            continue;
        }

        bool ok = false;
        for (int i = 0; i + 1 < n; ++i) {
            long long lo = min(a[i], a[i+1]);
            long long hi = max(a[i], a[i+1]);
            if (lo <= x && x <= hi) { ok = true; break; }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
