//  Created on
//  236A - Boys or Girl

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int count = 0;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != s[i-1]){
            count ++;
        }
    }
    if (count % 2)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;
    return 0;
}
