#include<iostream>
#include<math.h>
using namespace std;

//Function to calculate factorial
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

    if(sum==originalNumber){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not an Armstrong Number"<<endl;
    }
    return 0;
}