# include<iostream>
using namespace std;

/*To print the pattern
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
Code to print the pattern */

void pattern6(int n){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n; //Input by the user 
    cin>>n;
    pattern6(n);
    return 0;
}