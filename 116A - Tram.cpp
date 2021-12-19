#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, capacity = 0, stillNow = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        capacity = (a+stillNow) - b;
        stillNow = (capacity < 0) ? 0 : capacity;
    }
    cout << capacity << endl;
}
