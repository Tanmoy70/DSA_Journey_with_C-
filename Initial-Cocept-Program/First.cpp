#include <iostream>
using namespace std;

// Simple program to add two numbers
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
   
    int a,b;
    cin>>a>>b;
    cout << "Sum: " << a + b << endl;
    return 0;
}
