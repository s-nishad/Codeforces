//
// 677A. Vanya and Fence
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h, scount = 0, lcount = 0;
    cin >> n >> h;
    int a[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] <= h){
            scount += 1;
        }
        else
            lcount += 2;
    }
    cout << lcount + scount << endl;
}
