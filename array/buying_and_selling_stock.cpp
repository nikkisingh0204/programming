#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int c=INT_MAX;
    int p=0;
    for(int i=0;i<n;i++){
        if(a[i]<c)
            c=a[i];
        else if(p<(a[i]-c)){
            p=a[i]-c;

        }
    }
    cout<<p;
    return 0;
}