# include<iostream>
using namespace std;

/*To print the pattern
A B C D E 
A B C D 
A B C 
A B 
A 
Code to print the pattern */
void pattern15(int n){
   for(int i=0;i<n;i++){
         for (char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int n; //Input by the user 
    cin>>n;
    pattern15(n);
    return 0;
} 