//
// 734A - Anton and Danik
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, anton = 0, danik = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'A'){
            anton++;
        } else {
            danik++;
        }
    }
    if (anton > danik) {
        cout << "Anton" << endl;
    } else if (anton < danik){
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
}
