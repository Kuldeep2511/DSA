#include<bits/stdc++.h>
using namespace std;

#define mod  1000000007
class Solution {
public:
    long long power(long long x , long long y){
        if(y==0) return 1;

        long long ans = power(x,y/2);
        ans *= ans;
        ans %= mod;
        if(y%2) ans*=x;
        ans%=mod;
        return ans;
    }
    int countGoodNumbers(long long n) {

       long long odd = n/2;
       long long even = (n/2) + n%2;

       return (power(5,even) * power(4,odd))%mod;
      
        
    }
};

int main(){
    Solution obj;
    int n = 4;
    cout<<obj.countGoodNumbers(n);
    return 0;
}