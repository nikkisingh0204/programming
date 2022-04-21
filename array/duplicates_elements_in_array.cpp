//solution is for the  array inclusion 1 , n
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    //creating a frequency array by adding n to the respective  values .
    for(int i=0 ;i<n;i++){
        a[a[i]%n]=a[a[i]%n]+n; //whatever the number is in its respective position the numbers will be added 
    
    }
    for(int i=0 ;i<n;i++)
        if(a[i]/n>1)cout<<i<<endl<<a[i]/n; //if the valus is greater than n then it is repetitive 
}