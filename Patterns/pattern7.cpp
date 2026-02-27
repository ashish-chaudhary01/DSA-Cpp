// Pattern: Pyramid
// Concept: Nested loops

#include<iostream>
using namespace std;
int main(){
    int n =4;
    for(int i=1;i<=n;i++){ //outer loop
        for(int space=0;space<n-i;space++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}