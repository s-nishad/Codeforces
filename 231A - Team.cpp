//
// Created on 13/10/2021.
// 231A - Team
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int problem, p, v, t, i, count = 0;
    cin >> problem;
    while(problem--){
        cin >> p >> v >> t;
        if (p + v + t >= 2){
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}
