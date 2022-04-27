//time and space complexity o(n),o(n);
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)cin>>a[i];8
    for(int i=0;i<m;i++)cin>>b[i];

    unordered_map<int, int>m1;
    for(int i=0;i<n;i++)m1[a[i]]++;

    int c=0;
    for(int i=0;i<m;i++){
        if(m1[b[i]])
            c++;
    }
    // cout<<c;
    if(c!=m)cout<<"Not a subset";
    else{
        cout<<"IS a subset";
    }
    return 0;
}