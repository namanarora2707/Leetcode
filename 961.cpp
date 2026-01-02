#include <bits/stdc++.h>
using namespace std;
int repeatedNTimes(vector<int>& nums) {
    unordered_set<int> seen;

    for (int x : nums) {
        
        if (seen.count(x)) {
            return x;
        }
        seen.insert(x);
    }
    return -1; 
}
int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1};
    cout << repeatedNTimes(nums) << endl;
    return 0;
}