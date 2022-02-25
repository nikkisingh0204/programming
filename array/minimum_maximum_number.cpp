#include<iostream>
using namespace std;

//Approach 1
// int main(){
//     int n ; 
//     cin>>n;
//     int a[n];
//     for (int i=0; i<n;i ++) cin>>a[i];
//     int j=0;
//     int max , min ;
//     if(a[j]>a[j+1]){
//         max=a[j];
//         min=a[j+1];
//     } else{
//         max=a[j+1];
//         min=a[j];
//     }
//     for(int i=2;i<n;i++){
//         if(a[i]>max) max=a[i];;
//         if(a[i]<min) min=a[i];
//     }
//     cout<<"max"<<max;
//     cout<<"min"<<min;
//     return 0;
    
// }

//Approach 2
int main(){
    int n ; 
    cin>>n;
    int a[n];
    for (int i=0; i<n;i ++) cin>>a[i];
    int j=0;
    int max , min ;
    if(n==1){
        max=a[j];
        min=a[j];
    }else
    if(n%2==0){
        if(a[j]>a[j+1]){
        max=a[j];
        min=a[j+1];
        }
    } else{
        max=a[j+1];
        min=a[j];
    }
    for(int i=2 ; i<n ; i=i+2){
        if(a[i]>a[i+1]){
            if(a[i]>max) max=a[i];
            if(a[i+1]<min) min=a[i+1];
    }else {
            if(a[i]+1>max) max=a[i+1];
            if(a[i]<min) min=a[i];
    }
    }
    cout<<"max"<<max;
    cout<<"min"<<min;
}
    

