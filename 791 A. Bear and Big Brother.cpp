//  Created on 20/10/21
//  69A - Young Physicist

#include <bits/stdc++.h>
using namespace std;

int main() {
    int limark, bob, count{};
    cin >> limark >> bob;
    do {
        count ++;
        limark *= 3;
        bob *= 2;
    } while (limark <= bob);
    cout << count << endl;
    return 0;
}
