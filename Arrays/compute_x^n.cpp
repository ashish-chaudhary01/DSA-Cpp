//pow(num,n) || time complexity O(log n)

#include<iostream>
using namespace std;

int main(){
    double num;
    long n;
    double ans = 1;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Enter Power: ";
    cin>>n;

    if(n<0){
        num = 1/num;
        n = -n;
    }

    while(n>0){
        if(n%2==1){
            ans *= num;
        }
        num *= num;
        n /= 2;
    }

    cout<<"Answer: "<<ans<<endl;
    return 0;
}