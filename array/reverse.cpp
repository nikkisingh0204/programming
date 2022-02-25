#include<iostream>
using namespace std ;
int main()
{
    string s ;
    cin>>s;
    int l=s.length();
    int start=0 , end =l-1;
    while(start<end){
    swap(s[start],s[end]);
    start++;
    end--;
    }
    cout<<s;
    return 0;

}