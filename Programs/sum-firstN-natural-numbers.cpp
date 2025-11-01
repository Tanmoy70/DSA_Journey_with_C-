#include<bits/stdc++.h>
using namespace std;

//Function to calculate sum of first N natural numbers
int sum(int n){
    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans += i;
    }
    return ans; 
}

//Driver code
int32_t main(){
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}
