# include<iostream>
using namespace std;

/*To print the pattern
A 
B B 
C C C 
D D D D 
E E E E E 
Code to print the pattern */
void pattern16(int n){
   for(int i=0;i<n;i++){
    char ch = 'A'+i;
         for (int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int n; //Input by the user 
    cin>>n;
    pattern16(n);
    return 0;
} 