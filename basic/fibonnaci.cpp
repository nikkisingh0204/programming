//optimized code for fibbonaci series
#include<iostream>
#include<vector>
using namespace std;
int fibo(int n , vector<int>&dp){
    if(n<=1)
        return n;
    if(dp[n]!=-1)
        return dp[n];
    dp[n]=fibo(n-1,dp)+fibo(n-2,dp); //array to store the fibonnaci values so that no need to compute again and again. 
    return dp[n];
}
 int main(){
     int n;
     cin>>n;
     vector<int>dp(n+1,-1);
     int ans=fibo(n,dp);
     cout<<ans;
 }
