#include <bits/stdc++.h>
using namespace std;
int minSubarray(vector<int>& nums, int p) {
    long long total = 0;
    for (int x : nums) total += x;

    int need = total % p;
    if (need == 0) return 0; 

    unordered_map<int, int> mp;
    mp[0] = -1; 

    long long prefix = 0;
    int ans = nums.size();

    for (int i = 0; i < nums.size(); i++) {
        prefix = (prefix + nums[i]) % p;

        int target = (prefix - need + p) % p;

        if (mp.count(target)) {
            ans = min(ans, i - mp[target]);
        }

        mp[prefix] = i;
    }

    return (ans >= nums.size() ? -1 : ans);
}
int main() {
    vector<int> nums={1,4,5,6,7,2,3,4,6};
    int k=9;
    cout<<minSubarray(nums,k)<<endl;
    return 0;
}