#include <bits/stdc++.h>
using namespace std;

void pattern2(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    
    cout << "Pattern - 2" << endl;
    int n;
    cin >> n;
    
    cout << "\n";
    pattern2(n);
}