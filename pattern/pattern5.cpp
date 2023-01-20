# include<iostream>
using namespace std;

/*To print the pattern
    * * * * *
    * * * *
    * * *
    * *
    * 
Code to print the pattern */

void pattern5(int n){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n; //Input by the user 
    cin>>n;
    pattern5(n);
    return 0;
}