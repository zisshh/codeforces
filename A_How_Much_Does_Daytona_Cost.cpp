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
    int n , k; cin >> n >> k;
    vector<int> arr(n);
    for(int& x : arr){
        cin >> x;
    }
    //base case if the element is not found

    if(find(arr.begin(),arr.end(),k)==arr.end()){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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