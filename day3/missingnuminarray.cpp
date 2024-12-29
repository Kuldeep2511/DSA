#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0;i<n;i++ ){
                sum += nums[i];
        }
        return ((n*(n+1))/2) - sum;
    }
};

int main(){
    Solution obj;
    vector<int> nums = {0,1,3};
    int ans = obj.missingNumber(nums);
    cout<<ans;
    return 0;
}