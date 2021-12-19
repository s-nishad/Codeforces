#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int uString = 0, lString = 0;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            uString ++;
        } else {
            lString ++;
        }
    }

    if (uString > lString) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << endl;
}
