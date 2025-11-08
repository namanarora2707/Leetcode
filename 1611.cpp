#include <bits/stdc++.h>
using namespace std;
int minimumOneBitOperations(int n) {
    if (n == 0) return 0;
    int k = 31 - __builtin_clz(n);  
    return (1 << (k + 1)) - 1 - minimumOneBitOperations(n ^ (1 << k));
}
int main() {
    int n=3;
    cout<<minimumOneBitOperations(n);
    return 0;
}