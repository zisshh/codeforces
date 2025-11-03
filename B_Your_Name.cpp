#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    if (!(cin >> q)) return 0;
    while (q--) {
        int n;
        string s, t;
        cin >> n >> s >> t;

        int bagS[26] = {0}, bagT[26] = {0};
        for (char ch : s) bagS[ch - 'a']++;
        for (char ch : t) bagT[ch - 'a']++;

        bool same = true;
        for (int i = 0; i < 26; ++i) if (bagS[i] != bagT[i]) { same = false; break; }
        cout << (same ? "YES" : "NO") << '\n';
    }
    return 0;
}
