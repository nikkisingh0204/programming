// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n ,x;
//     cin>>n>>x;
//     int a[n];
//     for(int i=0;i<n ; i++)cin>>a[i];
//     int ans=0;
//     for(int i=0;i<n-2;i++){
//         unordered_set<int>s;
//         int curr=x-a[i];
//         for(int j=i+1;j<n;j++){
//             if(s.find(curr-a[j])!=s.end()){
//                 ans=1;
//                 break;
//             }
//             s.insert(a[j]);
//         }

//     }
//     cout<<ans;
//     return 0;
// }


// second approach
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n ; i++)cin>>a[i];
    int ans=0;
    for(int i=0;i<n-2;i++){
        int l=i+1;
        int r=n-1;
        while(l<r){
            if(a[i]+a[l]+a[r]==x){
                ans=1;
                break;
            }
            else {if(a[i]+a[l]+a[r]<x) l++;
            else{
                r--;
            }
            }
        }
        if(ans==1)break;
    }
    cout<<ans;
    return 0;
}

//Write the brute force program 