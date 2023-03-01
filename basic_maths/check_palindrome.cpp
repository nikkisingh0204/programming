#include<iostream>

using namespace std;

int reverse_number (int n){
    int sum = 0;
    while (n>0){
        int last_digit = n%10;
        sum = sum*10+last_digit;
        n = n/10;
    }
    return sum;
}

int main (){
    int n;
    cin>>n;
    int temp = n;
    int reverse;
    reverse = reverse_number(n);
    if(temp == reverse){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}