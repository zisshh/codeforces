#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

/*Thought Process
  
  
  
*/
/* Claims on algo
  
  
  
*/
void solve() {
    // Your solution logic here
    int n ; cin >> n ;
    vector<int> a(n); 
    for(int& x : a){
        cin >> x;
    }
    if(a[0]==1) cout<<"YES"<<endl;
    else{
        cout<< "NO"<<endl;
    }


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