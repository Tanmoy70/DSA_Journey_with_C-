#include<bits/stdc++.h>
using namespace std;

//Function to check if the given triplet is a Pythogorian triplet
bool check(int x, int y, int z){
    int a = max(x, max(y,z));
    int b, c;

    if(a == x){
        b=y;
        c=z;

    }
    else if(a == y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }

    if(a*a == b*b + c*c){
        return true;
    }
    else{
        return false;
    }   

}

//This is Pythogorian triplet if a^2 + b^2 = c^2
// for any permutation of a,b,c
int32_t main(){
    int x,y,z;
    
    cin >> x >> y >> z;

    if(check(x,y,z)){
        cout << "Pythogorian Tripletet\n";
    }
    else{
        cout << "Not a Pythogorian Tripletet\n";
    }

}