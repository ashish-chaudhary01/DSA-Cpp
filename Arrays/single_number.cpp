// finding and printing the single unique number in vector(array)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>num = {1,3,1,2,3,4,2};
    int ans=0;
    for(int val:num){
        ans ^= val;
    }

    cout<<ans<<endl;
    return 0;
}