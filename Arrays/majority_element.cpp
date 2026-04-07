// return majority element in an array
// Moore's algorithm || time complexity O(n)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int>arr = {1,3,2,3,2,3,1,3,3};
    int n = arr.size();
    int freq = 0, ans = 0;
    for(int i=0;i<n;i++){
        if(freq==0){
            ans = arr[i];
        }
        if(ans==arr[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<"Majority Element Is: "<<ans<<endl;
    return 0;
}

