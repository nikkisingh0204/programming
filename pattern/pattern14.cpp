# include<iostream>
using namespace std;

/*To print the pattern
A 
A B 
A B C 
A B C D 
A B C D E 
Code to print the pattern */
void pattern14(int n){
   for(int i=1;i<=n;i++){
         for (char ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int n; //Input by the user 
    cin>>n;
    pattern14(n);
    return 0;
} 