#include <iostream>
using namespace std;

int sumOfDigits(int n){
    //base case
    if(n==0){
        return 0;
    }else{
        return (n%10)+sumOfDigits(n/10);
    }
}

int  main(){
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    if(number < 0){
        cout << "Please enter a positive integer.\n";
    }else{
        int result = sumOfDigits(number);
        cout << "The sum of the digits of" << number << " is " << result << "." << endl;
    }
    return 0;
}