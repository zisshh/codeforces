#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<long long> target(n);
    for (int i = 0; i < n; ++i) cin >> target[i];

    // Map: value -> indices having that target value
    unordered_map<long long, vector<int>> pos;
    for (int i = 0; i < n; ++i) {
        if (target[i] > 0) pos[target[i]].push_back(i); // ignore zeros
    }

    // Distinct positive values, sorted descending
    vector<long long> level;
    level.reserve(pos.size());
    for (auto &kv : pos) level.push_back(kv.first);
    sort(level.begin(), level.end(), greater<long long>());

    int m = (int)level.size();
    if (m == 0) {
        cout << 0 << '\n';
        return;
    }

    // Simulate
    vector<long long> a(n, 0);
    int ops = 0;

    // For each adjacent pair (v_i, v_{i+1}): increase by (v_i - v_{i+1}), then smash all with target v_{i+1}
    for (int i = 0; i + 1 < m; ++i) {
        long long inc = level[i] - level[i + 1];
        // increase
        for (int j = 0; j < n; ++j) a[j] += inc;
        ++ops;

        // smash those destined for the next lower level
        for (int idx : pos[level[i + 1]]) a[idx] = 0;
        ++ops;
    }

    // Final increase by smallest level v_m
    long long last_inc = level.back();
    for (int j = 0; j < n; ++j) a[j] += last_inc;
    ++ops;

    // Optional sanity check (won’t print on CF)
    // assert(a == target);

    cout << ops << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while (t--) solve();
    return 0;
}