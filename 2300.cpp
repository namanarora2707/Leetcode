#include <bits/stdc++.h>
using namespace std;
vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
    sort(potions.begin(), potions.end());
    int m = potions.size();
    vector<int> ans;

    for (int spell : spells) {
        long long minPotion = (success + spell - 1) / spell; 
        int idx = lower_bound(potions.begin(), potions.end(), minPotion) - potions.begin();
        ans.push_back(m - idx); 
    }
    return ans;
}
int main() {
    vector<int> spells = {5, 1, 3};
    vector<int> potions = {1, 2, 3, 4, 5};
    long long success = 7;

    vector<int> result = successfulPairs(spells, potions, success);

    for (int x : result)
        cout << x << " ";
    cout << endl;
    return 0;
}