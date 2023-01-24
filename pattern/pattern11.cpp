# include<iostream>
using namespace std;

/*To print the pattern
    1 
    0 1 
    1 0 1 
    0 1 0 1 
    1 0 1 0 1 
Code to print the pattern */

void pattern4(int n){
    int start=1;
    for (int i=0;i<n;i++){
        if(i%2==0) start=1;
            else start=0;
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start=1-start;
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