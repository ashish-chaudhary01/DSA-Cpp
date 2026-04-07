//pair in sorted array with target sum
//two pointer approach, time complexity O(n)

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int>&arr,int n,int target){
    int i = 0, j = n-1;
    vector<int>ans;

    while(i<j){
        int sum = arr[i] + arr[j];
        if(sum>target){
            j--;
        }
        else if(sum<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}

int main(){
    vector<int>num = {2,7,11,15};
    int n = num.size();
    
    vector<int>ans = pairsum(num,n,26);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}