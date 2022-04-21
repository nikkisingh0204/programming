//brute's force time complexity o(n2)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++) cin>>a[i];
//     int ionv=0;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+i;j<n;j++){
//             if(a[i]>a[j])
//                 ionv++;
//         }
//     }
    
//     cout<<ionv;
//     return 0;
// }
//optimized merge sort technique time(on(log(n)))
#include<bits/stdc++.h>
using namespace std;
int merge(int a[],int temp[],int left , int mid ,int right){
    int i=left;
    int j=mid;
    int k=left;
    int inv=0;
    while((i<=mid-1)&&(j<=right)){
        if(a[i]<=a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
            inv=inv+(mid-i);
        }
    }
    while(i<=mid-1)
        temp[k++]=a[i++];
    while(j<=right)
        temp[k++]=a[j++];
    for(int i=left;i<=right;i++)
        a[i]=temp[i];
    return inv;
}
int merge_sort(int a[] , int temp[] , int left , int right){
    int mid , inv=0;
    if(right>left){
    mid=(right+left)/2;
    inv+=merge_sort(a,temp,left,mid);
    inv+=merge_sort(a,temp,mid+1,right);
    inv+=merge(a,temp,left,mid+1,right);
    }
    return inv;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int temp[n];
    int ans=merge_sort(a,temp,0,n-1);
    cout<<ans;
    return 0;
}