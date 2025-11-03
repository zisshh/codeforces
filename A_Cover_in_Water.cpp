#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

/*Thought Process
    row of cells, some are blocked, some are empty, all empty should have water in them 

    1.place water
    2.remove water from a cell and place in empty cell

    # is blocked and . is empty 

    minimum number of step 1 


  
  
*/
/* Claims on algo
  
  
  
*/
void solve() {
    // Your solution logic here
    int n; cin >> n ;
    string s;
    cin >>s;
    if(s.find("...") !=string::npos){
        cout<<2<<endl;
    }
    else{
        int req=count(s.begin(),s.end(),'.');
        cout<<req<<endl;
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