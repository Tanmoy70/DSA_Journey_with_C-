#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a, b;
    cin >> a >> b;
    if(a>b) {
        cout << "Max: " << a << endl;
    } else  if(a < b) {
        cout << "Maximun: " << b << endl;
    } else {
        cout << "Both are equal: " << a << endl;
    }
    

    return 0;
}