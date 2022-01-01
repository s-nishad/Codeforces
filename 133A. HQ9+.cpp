//
// 133A. HQ9+
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    int count = 0;
    cin >> a;
    for (int i = 0; i < a.length(); ++i) {
        if ((a[i] == 'H') || a[i] == 'Q' || (a[i] == '9'))
            count ++;
    }
    if (count)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
