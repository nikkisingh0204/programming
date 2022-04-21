#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++)cin>>a[i];
    int maxi=0;
    int sum=0;
    unordered_map<int ,int >v;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        if(sum==0){
            maxi=maxi+1;
        }
        else{
            if(v.find(sum) !=v.end()){
                maxi=max(maxi,i-v[sum]);
            }
            else{
                v[sum]=i;
            }
        }
    }
    cout<<maxi;
    return 0;
    }