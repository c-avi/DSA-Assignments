#include <iostream>
using namespace std;

// function to get the reversed number
int reverseNumber(int num, int rev =0){
    if(num == 0){
        return rev;
    }

    return reverseNumber(num/10 , rev*10+num%10);
}

// Function to check if num is a palindrome
bool isPalindrome(int N){
    return N == reverseNumber(N);
}

int main(){
    int N;
    cout << "Enter a natural number: ";
    cin >> N;
    
    if(isPalindrome(N)){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }

    return 0;
}