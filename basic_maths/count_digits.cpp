#include<iostream>

using namespace std;

int count_digits (int n){
    int count = 0;
    while (n>0){
        int last_digit = n%10;
        count = count+1;
        n = n/10;
    }
    return count;
}

int main (){
    int n;
    cin>>n;
    int count;
    count = count_digits(n);
    cout<<"The number of digits are "<<count;
    return 0;
}