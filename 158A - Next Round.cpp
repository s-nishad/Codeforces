//
// Created on 13/10/2021.
// 158A - Next Round

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int participants, p[100], fScore, count = 0;
    cin >> participants;
    cin >> fScore;

    for (int i = 0; i < participants; ++i) {
        cin >> p[i];
    }
    for (int i = 0; i < participants; ++i) {
        if (p[i] > 0 && p[i] >= p[fScore - 1])
            count ++;
    }
    cout << count << endl;
    return 0;
}
