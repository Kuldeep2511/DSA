#include<bits/stdc++.h>

using namespace std;

class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        string ans = "";
        string p = arr[0];
        for(int i = 1;i<arr.size();i++){
            int j = 0;
            ans = "";
            while(p[j] == arr[i][j]){
                ans += p[j];
                j++;
            }
            p = ans;
        }
        return p;
    }
};

int main(){
    Solution st;
    vector<string> arr = {"geeksfir" , "geeks" , "geew"};
    string ans = st.longestCommonPrefix(arr);
    cout<<ans;
    return 0;
}