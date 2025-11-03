#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

/*Thought Process
  
  2 3 2 3 2 
  
*/
/* Claims on algo
  
  
  
*/
void solve() {
    // Your solution logic here
    int n; cin >> n;
    vector<int> nums(n);
    for(int& x : nums) cin >> x;
    set<int> myset(nums.begin(),nums.end());
    if(myset.size()>2){
        cout<<"No"<<endl;
    }
    else if(myset.size()==1)
    {
        cout<<"Yes"<<endl;
    }
    else{
        
        auto it = myset.begin();
        int v1 = *it;
        ++it;
        int v2 = (it == myset.end() ? v1 : *it); // safe if set has 1 element
        int first = count(nums.begin(), nums.end(), v1);
        int second = count(nums.begin(), nums.end(), v2);
        if(n%2==0 && first==second) {
            cout<<"Yes"<<endl;
        }
        else if(n%2 !=0 && first==second+1 || second==first+1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
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