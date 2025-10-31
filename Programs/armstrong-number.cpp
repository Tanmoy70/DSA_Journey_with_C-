#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;
    int originalNumber=n;
    while(n>0){
        int lastDigit=n%10;
        sum+=pow(lastDigit,3); // sum+=lastDigit*lastDigit*lastDigit;
        n=n/10;
    }

    //An Armstrong number is a number that is equal to the sum of cubes of its digits

    if(sum==originalNumber){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not an Armstrong Number"<<endl;
    }
    return 0;
}