#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

/*Thought Process
so any of reverses are allowed 
and then if already sorted the yes 
if k==1 and not sorted then no 

6 4 2 1 and atmost 2   
4 6 2 1
4 2 6 1 
4 2 1 6
2 4 1 6
2 1 4 6
1 2 4 6

*/
/* Claims on algo
  
  
  
*/
void solve() {
    // Your solution logic here
    int n,k; cin >> n >> k;
    vector<int> tag(n);
    bool possible = false;
    for(auto &elem: tag ){
        cin >> elem;
    }
      if(k>=2 || is_sorted(tag.begin(),tag.end())){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

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