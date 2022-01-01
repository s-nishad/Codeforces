//
// 160A. Twins
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, sum = 0, count = 0, compare = 0;
    cin >> n;
    int a[n];
    for (i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    //sort as decreasing order
    for (int j = 0; j < n; ++j) {
        for (int k = 0; k < n; ++k) {
            if (a[j] > a[k]) {
                int temp = a[j];
                a[j] = a[k];
                a[k] = temp;
            }
        }
    }
    
    /* we can do the sort easily by a built in function  
     that is "   sort(a, a+n)   "  */
    
    for (i = 0; i < n; ++i) {
        compare += a[i];
        count ++;
        if ( compare > (sum/2) ) {
            break;
        }
    }
    cout << count << endl;
}
