#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
   void fun(int index , int sum , vector<int> &arr , int N,vector<int> &ans){
        if(index==N){
            ans.push_back(sum);
            return;
        }
        fun(index+1,sum+arr[index],arr,N,ans);
        fun(index+1,sum,arr,N,ans);
    }
    vector<int> subsetSums(vector<int>& arr) {
      vector<int> ans;
      int N = arr.size();
      fun(0,0,arr,N,ans);
      return ans;
    }
};
int main(){
  Solution obj;
  vector<int> arr = {2,3,4,5};
  vector<int> ans = obj.subsetSums(arr);
  for(auto a:ans){
    cout<<a<<" ";
  }
  return 0;
}