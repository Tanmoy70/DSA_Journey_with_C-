#include <iostream>
using namespace std;

// Demonstration of break and continue statementss
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

// Program to demonstrate break and continue statements
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i == 5) {
            break;
        }
        cout << i << " ";
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        if (i == 5) {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;

    return 0;
}