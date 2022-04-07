#include <bits/stdc++.h>
using namespace std;
 //using partition algorithm , we take a pivot and then shift the elements 
int main()
{//added a new line
    int n ;
    cin >>  n ;
    int pivot = 0; 
    int a[n];
    for (int i=0 ; i <n;i++){
        cin>>  a[i];
    }
    int i =-1;
    for (int j=0; j<n;j++){
        if (a[j]<0){
            i++;
            swap(a[i],a[j]);
        }
    }
    for(int i=0 ; i <n ; i++)
        cout<<a[i]<<endl;
    return 0;
}