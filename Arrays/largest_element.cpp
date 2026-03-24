// finding the largest number in array

#include<iostream>
using namespace std;

int main(){
    int num[] = {45,21,78,56,86,19,49,67};
    int n = sizeof(num)/sizeof(num[0]);
    int largest = num[0];

    for(int i=0;i<n;i++){
        largest = max(num[i],largest);
    }

    cout<<"The Largest number Is: "<<largest<<endl;
    return 0;
}