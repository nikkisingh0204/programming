#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int sum=0;
    unordered_map<int ,int>m1;
    unordered_set<int>s;
    for(int i=0;i<n;i++)m1[a[i]]++;
    for(int i=0;i<n;i++){
        m1[a[i]]--;
        for(int j=i+1;j<n;j++){
            m1[a[j]]--;
            if(a[i]+a[j]+(-(a[i]+a[j]))==sum){
            s.insert(a[i]);
            s.insert(a[j]);
            s.insert(-(a[i]+a[j]));
            }

            m1[a[j]]++;


        }
        m1[a[i]]++;

    } 
    for(auto i :s){
        cout<<i<<" ";
    }
    return 0;
}