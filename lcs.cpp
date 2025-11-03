#include <iostream>
#include <unordered_set>
using namespace std;

int solve(int n, vector<int> &input){
    if(n==0) return 0;
    int longest =1;
    unordered_set<int> uset;
    for(int i=0;i<n;i++){
        uset.insert(input[i]);
    }
    //inserted in set so there are no duplicate elements
    //check for starting point in the set
    for(auto it:uset){
        if(uset.find(it-1)==uset.end()){
            int cnt=1;
            int x=it;
            while(uset.find(x+1)!=uset.end()){
                x=x+1;
                cnt=cnt+1;
            }
            longest=max(longest,cnt);

        }
    }

    return longest;
}


int main(){
    int n; //size of the input array
    cin>>n;
    vector<int> input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
    }

    solve(n,input);

}
