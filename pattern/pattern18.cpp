# include<iostream>
using namespace std;

/*To print the pattern
E 
D E 
C D E 
B C D E 
A B C D E 
Code to print the pattern */

void pattern18(int n){
    for (int i=0;i<n;i++){
        for(char ch ='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n; //Input by the user 
    cin>>n;
    pattern18(n);
    return 0;
} 