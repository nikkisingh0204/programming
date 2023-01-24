# include<iostream>
using namespace std;

/*To print the pattern
   1 2 3 4 5 
    2 3 4 5 
    3 4 5 
    4 5 
    5      
Code to print the pattern */

void pattern11(int n){
    for (int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n; //Input by the user 
    cin>>n;
    pattern11(n);
    return 0;
}