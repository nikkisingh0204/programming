#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t ;
    cin >>t ;
    while(t--){
        int n , m ;
        cin >> m >>n;
        int a[n] , b[m];
        unordered_map<int,int>map1; //stores the count of distinct element in the array
        for (int i=0;i<n;i++){
            cin >> a[i];
            map1[a[i]]++;
        }    
        for (int i=0;i<m;i++){
            cin >> b[i];
            map1[b[i]]++;
        } 
        cout<< map1.size() << endl;   
    }
  return 0;
}