//
// 110A. Nearly Lucky Number
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    int lucky = 0;
    cin >> n;
    for (int i = 0; i < n.size() ; ++i) {
        if (n[i] == '4' || n[i] == '7') {
            lucky++;
        }
    }
    if (lucky == 4 || lucky == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
