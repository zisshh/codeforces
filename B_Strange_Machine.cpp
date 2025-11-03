#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

/*Thought Process
  
n machines  n<=20  
two types a and b 
    outer loop which will have the number of queries 
  
  
*/
/* Claims on algo
  
  
  
*/
void solve(){

    int n , q; cin >> n >> q;
    string s; cin >> s;
    int b=0;
    for( char c : s) if(c=='B') b=1;

    for(int i=0;i<q;i++){
        int x ; cin>>x;
        if(b==0) cout<<x<<endl;
        else{
            int i=0, ans=0;
            while(x){
                ans++;
                if(s[i]=='A') x--;
                else x/=2;
                i++;
                i%=n;
            }
            cout<<ans<<endl;
        }
    }

}


//time consuming 
// void solve() {
//     // Your solution logic here
//     int n , q ;
//     cin >> n >> q;
//     string s;
//     cin >> s;
//     vector<int> a(q);
//     for(int i=0;i<q;i++){
//         cin >> a[i];
//     }
//     for(int j=0;j<q;j++){
//         int count=0;
//        while(a[j]!=0){ 

//             for(int i=0;i<n;i++){ 
//                 count++;
//                 if(s[i]=='A') {
//                     a[j]=a[j]-1;
//                     if(a[j]==0) break;
//                 }
//                 else{
//                     a[j]=a[j]/2;
//                     if(a[j]==0) break;
//                 }
                
//             }
//         }
//         cout<<count<<endl;
//     }

    
// }

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