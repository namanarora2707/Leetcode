#include <bits/stdc++.h>
using namespace std;
int countPartitions(vector<int>& nums) {
    long long total = 0;
    for (int x : nums) total += x;
    if (total % 2 == 0) 
        return nums.size() - 1;
    return 0;
}
int main() {
    vector<int> nums = {1, 2, 3, 4};
    cout << countPartitions(nums) << endl;
    return 0;
}