#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

/*Thought Process
  
string x 
  
*/
/* Claims on algo
  
  
  
*/
void solve() {
    // Your solution logic here
    int n, m ; cin >> n >> m ; 
    string x, s;
    cin >> x;
    cin >> s;
    
    int times=0;
    if(x.find(s) != string::npos){
        cout<<"0"<<endl;
        return;
    }
    
   while(x.find(s) == string::npos && times<=5){
        x+=x;
        times++;
   }
   if(times>5) cout<<"-1"<<endl;
   else cout<<times<<endl;

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