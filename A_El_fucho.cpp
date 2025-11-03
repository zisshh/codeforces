#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

/*Thought Process  
juan and his frnds split in n teams 
double elimination football
wg and lg
teams==wg

one of the groups should consist of atleast 2 teams for somethings to happen

if teams are odd in wg  unpaired team stays in winner group 

pair up team plays football match in which no ties are there

wins=wg 
loses=lg


if teams are odd in lg unpaird stays in loser group

for paired teams
wins=lg
loses=eliminated


if team loses in wg ->lg in next round (no participation in current round lg pairing process)

*/

/* Claims on algo

n=3
round 1 = 1,2 (3 in wg) 2 wins lg is empty

round 2 lg has 1 and 2,3 2 wins again 

round 3 lg has 1 and 3 , 3 wins 1 gets terminated
round 4 lg has 1 and wg has 1 so final match 

so total 4 matches   

total was (n-1)*2;


*/
void solve() {
    // Your solution logic here
    int n; cin>>n;
    //basecase

    cout<<(n-1)*2<<endl;




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