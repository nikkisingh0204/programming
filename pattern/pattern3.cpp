# include<iostream>
using namespace std;

/*To print the pattern
    1 
    1 2 
    1 2 3 
    1 2 3 4
    1 2 3 4 5 
Code to print the pattern */

void pattern3(int n){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n; //Input by the user 
    cin>>n;
    pattern3(n);
    return 0;
}