#include <bits/stdc++.h>
using namespace std;
int divisor(int n) {
    int sum = 0;
    int cnt = 0;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            int d1 = i;
            int d2 = n / i;

            if (d1 == d2) {
                cnt++;
                sum += d1;
            } else {
                cnt += 2;
                sum += d1 + d2;
            }

            if (cnt > 4) return 0;
        }
    }

    return cnt == 4 ? sum : 0;
}

int sumFourDivisors(vector<int>& nums) {
    int answer = 0;
    for (int x : nums) {
        answer += divisor(x);
    }
    return answer;
}
int main() {
    vector<int> nums = {21, 4, 7};
    cout << sumFourDivisors(nums) << endl;
    return 0;
}