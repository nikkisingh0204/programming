# include<iostream>
using namespace std;

/*To print the pattern
 *********
  ******* 
   *****  
    ***   
     *    
Code to print the pattern */

void pattern8(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for( int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n; //Input by the user 
    cin>>n;
    pattern8(n);
    return 0;
} 