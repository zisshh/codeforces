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
    int score=0;
    vector<vector<char>> targets(10,vector<char>(10));
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin >> targets[i][j];
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(targets[i][j]=='X' && ((i==0 || i==9) || (j==0 || j==9))){
                score+=1;
            }
            else if(targets[i][j]=='X' && ((i==1 || i==8) || (j==1 || j==8))){
                score+=2;
            }
            else if(targets[i][j]=='X' && ((i==2 || i==7) || (j==2 || j==7))){
                score+=3;
            }
            else if(targets[i][j]=='X' && ((i==3 || i==6) || (j==3 || j==6))){
                score+=4;
            }
            else if(targets[i][j]=='X' && ((i==4 || i==5) || (j==4 || j==5))){
                score+=5;
            }
            else{
                continue;
            }
        }
    }
    cout<<score<<endl;


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