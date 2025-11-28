#include <iostream>
using namespace std;

// Program to print a hollow rectangle star pattern

// int main() {
//     int row, col;
//     cin >> row >> col;;

//     for (int i=1;i<=row;i++){
//         for (int j=1; j<=col; j++){
//             if(i==1 || i==row || j==1 || j==col) {
//                 cout << "*";
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << endl;       
//     }

//     return 0;
// }

// Program to print a reverse right-angled triangle star pattern
int main(){
    int n;
    cin>> n;

    for (int i=n; i>=1; i--){
        for( int j=1; j<=i; j++){
            cout<< "*";
        }
        cout<< endl;
    }
    return 0;
}


