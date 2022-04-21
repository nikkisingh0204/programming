// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n ;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int dp[n];
//     for(int i=0;i<n;i++) dp[i]= INT_MAX;
//     dp[0]=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             if(dp[j]!=INT_MAX and (a[j]+j>=i)){
//                 if(dp[j]+1<dp[i]){
//                     dp[i]=dp[j]+1;
//                 }
//             }

//         }
//     }
//     if(dp[n-1]!=INT_MAX)
//         cout<<dp[n-1];
//     else
//         cout<<-1<<"\n";
//         return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];                   
    int maxR=a[0];
    int step=a[0];
    int jump=1;
    for(int i=1 ; i<n ;i++){
        if(i==n-1){
            cout<<jump;
        }
        maxR=a[i]+1;
        step--;
        if(step==0){
            jump++;
            if(i>maxR)
                cout<<-1;
        }
        step=maxR-i;


    }
    return 0;
}