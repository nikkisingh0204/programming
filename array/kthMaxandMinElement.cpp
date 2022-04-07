//using the sorting method 
// #include <bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//     int t ;
//     cin>> t;
//     while(t--){
//         int n ;
//         cin >> n;
//         int a[n];
//         for(int i=0 ; i<n ;i++){
//             cin >> a[i] ;
//         }
//         int k ;
//         cin >> k ;
//         sort(a, a + n);
//         cout << a[k-1]<<endl ;
//     }
 
//     return 0;
// }
//using priority queue 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t ;
    cin>> t;
    while(t--){
        int n ;
        cin >> n;
        int a[n];
        for(int i=0 ; i<n ;i++){
            cin >> a[i] ;
        }
        int k ;
        cin >> k ;
        priority_queue<int,vector<int>,greater<int>>p;
        for( int i =0 ;i<n ;i++){
            p.push(a[i]);
        }
        int ans , i=1 ;
        while(!p.empty()){
            if (i==k)
            {
                ans=p.top();
                break;
            }
            i++;
            p.pop();

        }
    
        cout<< ans <<"\n";
    }
    return 0 ;
    }


