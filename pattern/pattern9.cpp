# include<iostream>
using namespace std;

/*To print the pattern
    *    
   ***   
  *****  
 ******* 
*********
*********
 ******* 
  *****  
   ***   
    *   
Code to print the pattern */
void upper(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for( int j=0 ;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}


void lower(int n){
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
    upper(n);
    lower(n);
    return 0;
} 