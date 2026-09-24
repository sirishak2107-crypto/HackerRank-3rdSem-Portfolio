#include <bits/stdc++.h>
using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int alice = 0;
    int bob = 0;

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i])
            alice++;
        else if (a[i] < b[i])
            bob++;
    }

    return {alice, bob};
}