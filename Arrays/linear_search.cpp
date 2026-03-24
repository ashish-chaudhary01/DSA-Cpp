// seaching an array element, if present return index otherwise -1

#include<iostream>
using namespace std;

int main(){
    int num[] = {45,36,8,14,67,31,94,77,40};
    int n = sizeof(num)/sizeof(num[0]);
    int target,found=0;

    cout<<"Enter Element To Search: ";
    cin>>target;
    
    for(int i=0;i<n;i++){
        if(num[i]==target){
            found++;
            cout<<"The Element Is At Index: "<<i+1<<endl;
        }
    }

    if(found==0){
        cout<<"No Such Element"<<endl;
    }
    return 0;
}