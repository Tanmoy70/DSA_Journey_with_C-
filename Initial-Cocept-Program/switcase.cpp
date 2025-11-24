#include <iostream>
using namespace std;

// Program to demonstrate switch-case statement
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    char button;
    cin>>button;

    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Namaste" << endl;
        break;
    case 'c':
        cout << "Hola" << endl;
        break;

    default:
    cout << "This is default" << endl;
        break;
    }
}