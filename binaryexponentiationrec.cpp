#include <bits/stdc++.h>

/*
thought process 

3^16 ----> 3*3*3*........*3 16 times naive approach

3^16 ---> first call 






*/




using namespace std;



long long power(long long a, long long b) {
    // Base case
    if(b == 0) return 1;
    
    // Recursive case
    long long half = power(a, b/2);
    
    if(b % 2 == 0) {
        // If b is even: a^b = (a^(b/2))²
        return half * half;
    } else {
        // If b is odd: a^b = (a^(b/2))² × a
        return half * half * a;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Your code here
    long long ans=power(3,16);
    cout<<ans<<endl;
    

    return 0;
}       