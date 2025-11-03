#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

static ll answer_for_query(ll x, const vector<int>& runs) {
    if (runs.empty()) return x;
    ll steps = 0;
    int i = 0, m = (int)runs.size();
    while (x > 0) {
        ll use = min<ll>(runs[i], x);
        x -= use;
        steps += use;
        if (x == 0) break;
        x >>= 1;
        ++steps;
        i = (i + 1) % m;
    }
    return steps;
}

void solve() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    bool hasB = false;
    for (char c : s) if (c == 'B') { hasB = true; break; }

    vector<int> runs;
    if (hasB) {
        runs.reserve(n);
        int pos = 0, used = 0;
        while (used < n) {
            int cnt = 0;
            while (used < n && s[pos] == 'A') {
                ++cnt;
                pos = (pos + 1) % n;
                ++used;
            }
            runs.pb(cnt);
            if (used < n && s[pos] == 'B') {
                pos = (pos + 1) % n;
                ++used;
            }
        }
    }

    for (int i = 0; i < q; ++i) {
        ll a; 
        cin >> a;
        cout << answer_for_query(a, runs) << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
