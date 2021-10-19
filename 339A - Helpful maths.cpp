//  created on 15/10/21
//  339A - Helpful maths

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int temp, len;
    cin >> s;
    len = s.size();
    for (int i = 0; i < len; i += 2) {
        for (int j = 0; j < len - 1 ; j += 2) {
            if (s[j] > s[j+2]) {
                temp = s[j];
                s[j] = s[j+2];
                s[j+2] = temp;
            }
        }
    }
        cout << s << endl;
    return 0;
}
