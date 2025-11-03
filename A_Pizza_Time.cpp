#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

/*Thought Process

n slices 
each day process takes place
if atmost 2 slices remaining alex east all
m is current slices m>=3 
hao splits them into m1 m2 m3 such that m1+m2+m3= m

  
  
*/
/* Claims on algo
  
  
  
*/

int res(int n){
    if(n<3) return 0;
    int m1=n/3;
    int m3=n-2*m1;
    
    m1=m1+res(m3);
    return m1;
}

void solve() {
    // Your solution logic here
    int n; cin >> n ;
    cout<<res(n)<<endl;
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