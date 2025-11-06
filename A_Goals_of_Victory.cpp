#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

/*Thought Process
so efficiency is goals scored - goals taken 
 
T1GS-T1GT against Team 2 
same for team 3 
and same for team 4

  
  
*/
/* Claims on algo
  
  
  
*/
void solve() {
    // Your solution logic here
    int n; cin >> n ; 
    vector<int> efficiency(n-1);
    for(int &x : efficiency){
        cin >> x;
    }
    int sum=0;
    for(int &i : efficiency){
        sum+=i;
    }
    cout<<(-sum)<<endl;
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