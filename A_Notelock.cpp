#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

void solve(string s, int n, int k) {
    // If no 1's exist, no protection needed
    if (s.find('1') == string::npos) {
        cout << 0 << '\n';
        return;
    }

    int protectCount = 0;
    string current = s;  // Track changes as Teto processes the string

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {  // Check original string
            // Check if previous k-1 elements contain a 1
            bool hasOne = false;
            for (int j = max(0, i - k + 1); j < i; j++) {
                if (current[j] == '1') {
                    hasOne = true;
                    break;
                }
            }
            
            if (!hasOne) {
                // Teto would change this 1 to 0, so protect it
                protectCount++;
                // Since we protect it, it stays 1 in simulation
            } else {
                // Teto can't change this, so it stays 1
            }
            
            // Update current string for simulation
            if (!hasOne && protectCount == 0) {
                // If not protected and can be changed, Teto changes it
                current[i] = '0';
            }
        }
    }

    cout << protectCount << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string inp;
        cin >> inp;
        solve(inp, n, k);
    }
    
    return 0;
}