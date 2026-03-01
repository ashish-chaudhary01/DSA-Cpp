// binary to decimal conversion code

#include<iostream>
using namespace std;

int decimalTobinary(int decnum){ 
    int ans=0,pow=1;

    while(decnum>0){
        int rem = decnum % 10;
        ans += (rem*pow);
        pow*= 2;
        decnum /= 10;
    }
    return ans;
}

int main(){
    int decnum;
    cout<<"Enter Number To Convert: ";
    cin>>decnum;
    cout<<"The Decimal Conversion is: "<<decimalTobinary(decnum)<<endl;
    return 0;
}