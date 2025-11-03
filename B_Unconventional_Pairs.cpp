#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

/*Thought Process
 
sort the array then take the difference in pair wise return the max difference 

  
  
*/
/* Claims on algo
  
  
  
*/
void solve() {
    // Your solution logic here
    int n; cin >> n ;
    vector<int> pairs(n);
    int maxdiff=INT_MIN;    
    for(int i=0;i < n;i++){
        cin >> pairs[i];
    }
    sort(pairs.begin(),pairs.end());
    for(int i =0;i<n;i+=2){
       int j=i+1;
        int diff=pairs[j]-pairs[i];
        if(diff > maxdiff) maxdiff=diff;
    }
    cout<<maxdiff<<endl;
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