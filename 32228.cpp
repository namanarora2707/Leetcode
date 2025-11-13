#include <bits/stdc++.h>
using namespace std;
int maxOperations(string s) {
    int operations = 0;
    int ones_count = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            ones_count++;
        } else if (i > 0 && s[i - 1] == '1') {
            
            operations += ones_count;
        }
    }
    
    return operations;
}
int main() {
    string s="1101011";
    cout << maxOperations(s) << endl;
    return 0;
}