#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

/*Thought Process

vanya and vova game 
n 
on turn either add 1 or sub 1
vanya starts
if div/3 then he wins 
if 10 moves have passed and vanya has not won then vova wins
  
  
*/
/* Claims on algo
  
  
  
*/
void solve() {
    // Your solution logic here
    int n; cin >> n;
    if(n%3==0) cout << "Second"<<endl;
    else{
        cout<<"First"<<endl;
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