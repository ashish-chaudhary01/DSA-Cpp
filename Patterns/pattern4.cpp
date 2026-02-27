// Pattern: Traingle
// Concept: Nested loops

#include<iostream>
using namespace std;
int main(){
    int n =4;
    for(int i=0;i<n;i++){ //outer loop
        for(int j=0;j<=i;j++){ //inner loop
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}