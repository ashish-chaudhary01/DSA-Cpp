// reversing an array 

#include<iostream>
using namespace std;

void reversearray(int num[],int n){
    int start = 0, end = n-1;
    while(start<end){
        swap(num[start],num[end]);
        start++;
        end--;
    }
}

int main(){
    int num[] = {45,36,8,14,67,31,94,77,40};
    int n = sizeof(num)/sizeof(num[0]);
    reversearray(num,n);

    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    return 0;
}