#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

/*Thought Process  
 we have a fixed length of subarray so we dont need to calculate all the subarrays
 we can create a l and r and increment both by 1 in each loop 

 and when we find the we increase the counter


 the length of r and l should be equal to m 
 l will always start from 0 so with l and m we can calculate r with the formual r-l+1=m


*/

/* Claims on algo  */
void solve() {
    // Your solution logic here
    ll n, m;
    cin >> n >> m;

    vector<int> favs(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> favs[i];
    }
    bool flag = false;
    for (ll i = m - 1; i > 0; --i)
    {

        if (favs[i] == 1)
        {
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout << n - favs[m - 1] +1 << endl;
    }
    else
        cout << 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; // Number of test cases
     cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}