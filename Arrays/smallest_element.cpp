//Finding the smallest number in array

#include<iostream>
using namespace std;

int main(){
    int num[] = {45,21,78,56,86,19,49,67};
    int n = sizeof(num)/sizeof(num[0]);
    int smallest = num[0];

    for(int i=0;i<n;i++){
        smallest = min(num[i],smallest);
    }

    cout<<"The Smallest number Is: "<<smallest<<endl;
    return 0;
}