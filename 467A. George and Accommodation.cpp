//
// 467A. George and Accommodation
//
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, living, capacity, count = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> living >> capacity;
        if ((capacity - living) >= 2) {
            count ++;
        }
    }
    cout << count << endl;
}
