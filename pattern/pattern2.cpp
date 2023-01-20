# include<iostream>
using namespace std;

/*To print the pattern
    * 
    * * 
    * * * 
    * * * *
    * * * * * 
Code to print the pattern */

void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n; //Input by the user 
    cin>>n;
    pattern2(n);
    return 0;
}