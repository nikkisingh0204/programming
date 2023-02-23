# include<iostream>
using namespace std;

/*To print the pattern
*****
*   *
*   *
*   *
*****
Code to print the pattern */

void pattern21(int n){
    for (int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=2*n-2-j;
            int bottom=2*n-2-i;
            cout<<(n-min(min(left,right),min(top,bottom)));
        }
        cout<<endl;
    }
}


int main(){
    int n; //Input by the user 
    cin>>n;
    pattern21(n);
    return 0;
} 