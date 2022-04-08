// #include <bits/stdc++.h>
// using namespace std;
//  //o(n^3)complexity program 
// int main()
// {
//     int n ;
//     cin >> n;
//     int a[n];
//     for(int i=0;i<n;i++) cin>> a[i];

//     int max=INT_MIN; //needs a look
//     for(int i=0; i<n;i++){
//         for(int j=0 ; j<n ;j++){
//             int sum = 0;
//             for (int k=i;k<=j;k++){
//                 sum=sum+k[a];
//             }
//             if(sum>max){
//                 max=sum;
//             }
//         }
         
//     }
//     cout<<max;
//   return 0 ;
// }
//o(n^2) solution using prefix sum array 
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n ;
//     cin >> n;
//     int a[n];
//     for(int i=0;i<n;i++) cin>> a[i];
//     //prefix sum array
//     int pre[n];
//     pre[-1]=0;
//     for(int i=0;i<n;i++){
//         pre[i]=pre[i-1]+a[i];
//     }

//     int max=INT_MIN; //needs a look
//     for(int i=0; i<n;i++){
//         for(int j=0 ; j<n ;j++){
//            int sum = pre[j]-pre[i-1];
        
//         if(sum>max){
//             max=sum;
//         }
//         }
//     }
//     cout<<max;
//     return 0;
// } 
//kadane's algorithm o(n)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin>> a[i];
    int max=INT_MIN;
    int max_till_here=0;
    for(int i=0 ;i<n; i++){
        max_till_here=max_till_here+a[i];
        if(max_till_here>max){
            max=max_till_here;
        }
        if(max_till_here<0){
            max_till_here=0;
        }
    }
    cout<<max;
    return 0;
}