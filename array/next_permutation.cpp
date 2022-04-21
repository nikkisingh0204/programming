#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    vector<int>a;
    int k;
    int j;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
        }   //dictionary
    for( k=n-2;k>=0;k--){
        if(a[k]<a[k+1])
        break;
    }
    if(k<0){
        reverse(a.begin(),a.end());
    }
    else{
        for(j=n-1;j>k;j--){
            if(a[j]>a[k])
            break;
        }
    }
    swap(a[k],a[j]);
    reverse(a.begin()+k+1 ,a.end());
    for(int i=0;i<n;i++)cout<<a[i];
}