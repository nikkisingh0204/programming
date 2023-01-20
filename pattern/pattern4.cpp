# include<iostream>
using namespace std;

/*To print the pattern
    1 
    2 2 
    3 3 3 
    4 4 4 4
    5 5 5 5 5 
Code to print the pattern */

void pattern4(int n){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n; //Input by the user 
    cin>>n;
    pattern4(n);
    return 0;
}