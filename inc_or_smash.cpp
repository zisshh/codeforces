#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

/*Thought Process  

113
sort in descending order in a set to remove duplicates
in set (3,1)
then perform operations in a which is 000
so first 3-1 is 2 so append 2 in each element 
222
then smash the indexes where 1 is present in the final target array
then 002
then add 1 to each element
113
similary the chain goes on

*/
/* Claims on algo  */
void solve() {
    // Your solution logic here
    int n; cin >> n;
    vector<int> a(n,0);
    vector<int> target;
    set<int> s;
    for(int i=0;i<n;i++){
        cin >>  target[i];
        s.insert(target[i]);
    }
    int count=0;

    //step increase
    for(auto it=s.begin();it!=s.end();++it ){
        auto nextit=next(it);
        if(nextit != s.end()){
            int diff = *it - *nextit;
            for(int i=0;i<n;i++){
                a[i]+=a[i]+diff;
                count++;
            }
            for(int i=0;i<n;i++){
                if(*nextit == target[i]){
                    a[i]=0;
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;

    //step smash
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