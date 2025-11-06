#include <bits/stdc++.h>
using namespace std;

bool find_pair(const vector<long long>& b, long long& x, long long& y) {
    int m = b.size();
    if (m < 2) return false;
    for (int i = 0; i < m - 1; i++) {
        long long modd = b[i + 1] % b[i];
        if (modd % 2 == 0) {
            x = b[i];
            y = b[i + 1];
            return true;
        }
    }
    // brute force all pairs
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            long long modd = b[j] % b[i];
            if (modd % 2 == 0) {
                x = b[i];
                y = b[j];
                return true;
            }
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int test = 0; test < t; test++) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long> odds, evens;
        for (auto num : a) {
            if (num % 2 == 0) {
                evens.push_back(num);
            } else {
                odds.push_back(num);
            }
        }
        if (evens.size() >= 2) {
            cout << evens[0] << " " << evens[1] << "\n";
            continue;
        }
        if (evens.size() == 0) {
            long long xx, yy;
            if (find_pair(odds, xx, yy)) {
                cout << xx << " " << yy << "\n";
            } else {
                cout << "-1\n";
            }
            continue;
        }
        // exactly one even
        long long e = evens[0];
        auto it = lower_bound(odds.begin(), odds.end(), e);
        int left_cnt = it - odds.begin();
        bool found = false;
        for (int k = 0; k < left_cnt; k++) {
            long long modd = e % odds[k];
            if (modd % 2 == 0) {
                cout << odds[k] << " " << e << "\n";
                found = true;
                break;
            }
        }
        if (!found) {
            long long xx, yy;
            if (find_pair(odds, xx, yy)) {
                cout << xx << " " << yy << "\n";
            } else {
                cout << "-1\n";
            }
        }
    }
    return 0;
}
