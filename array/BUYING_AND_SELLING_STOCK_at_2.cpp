#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[n];
    int df[n];
    for(int i=0;i<n;i++)df[i]=0;
    int ma=a[n-1];
    int mi=a[0];
    for(int i=1;i<n;i++){

        if(a[i]<mi) mi=a[i];
        df[i]=max(df[i-1],df[i]+(a[i]-mi));

        
    }
    for(int j=n-2;j>=0;j--){
        if(a[j]>ma)
            ma=a[j];
            df[j]= max(df[j+1],ma-a[j]);
        
    }
    cout<<df[n-1];
    return 0;
}