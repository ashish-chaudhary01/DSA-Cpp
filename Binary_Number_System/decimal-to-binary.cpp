#include<iostream>
using namespace std;

int decimalTobinary(int decnum){
    int ans=0,pow=1;

    while(decnum>0){
        int rem = decnum % 2;
        ans += (rem*pow);
        pow*= 10;
        decnum /= 2;
    }
    return ans;
}

int main(){
    int decnum;
    cout<<"Enter Number To Convert: ";
    cin>>decnum;

    cout<<"The Binary Conversion is: "<<decimalTobinary(decnum)<<endl;
    return 0;
}