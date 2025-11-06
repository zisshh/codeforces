 #include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        int n, m;
        cin >> n >> m;
        vector<ll> a(n);
        for (auto &x : a) cin >> x;
        vector<ll> b(m), c(m);
        for (auto &x : b) cin >> x;
        for (auto &x : c) cin >> x;
        vector<pair<ll, ll>> upg;
        vector<ll> cons;
        for (int i = 0; i < m; ++i) {
            if (c[i] > 0) {
                upg.emplace_back(b[i], c[i]);
            } else {
                cons.push_back(b[i]);
            }
        }
        sort(upg.begin(), upg.end());
        sort(cons.begin(), cons.end());
        multiset<ll> avail;
        for (auto x : a) avail.insert(x);
        int killed = 0;
        // Process upgraders
        for (auto [bb, cc] : upg) {
            auto it = avail.lower_bound(bb);
            if (it == avail.end()) continue;
            ll x = *it;
            avail.erase(it);
            ++killed;
            avail.insert(max(x, cc));
        }
        // Process consumers
        for (auto bb : cons) {
            auto it = avail.lower_bound(bb);
            if (it == avail.end()) continue;
            ll x = *it;
            avail.erase(it);
            ++killed;
        }
        cout << killed << '\n';
    }
    return 0;
}

