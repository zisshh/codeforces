#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

/*Thought Process
  so we have to calc minimum possible volume of the gas tank 

  we have to go from 0-x and then back form x-0 travel total of 2x
  and then we have a stations no stations at 0 and x


  if i have to go o 0-7 and there are 3 stations at 1 2 5 
  so what we have to do is we have to subtract the destination and compare it with the gas stations value if the diff 
  is greater than the gas station value we have to move forward and subtract the next gas station value till the gas station>diff
  return the difference or 
/*Thought Process

  
*/


/* Claims on algo
  
  
  
*/
void solve() {
    // Your solution logic here]
    int n,x; cin>>n>>x;
    int dist=0,min=0;
    vector<int> ppp(n);
    for(int i=0;i<n;i++){
        cin>>ppp[i];
    }
   
    dist=x-ppp[n-1];
    min=2*dist;
    for(int i=n-1;i>=0;i--){
        if(i==0){
            dist=ppp[i];
        }
        else{
            dist=ppp[i]-ppp[i-1];
        }
        if(min<dist){
            min=dist;
        }
    }
    cout<<min<<endl;
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
