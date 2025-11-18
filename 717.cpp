#include <bits/stdc++.h>
using namespace std;
bool isOneBitCharacter(vector<int>& bits) {
    int n = bits.size();
    int i = 0;

    while(i < n - 1) {       
        if(bits[i] == 1) {
            i += 2;          
        } else {
            i += 1;          
        }
    }
    return i == n - 1;
}
int main() {
    vector<int> bits={1,0,0};
    if(isOneBitCharacter(bits)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}