#include <bits/stdc++.h>
using namespace std;

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> seqList(n);
    vector<int> result;
    int lastAnswer = 0;

    for (auto query : queries) {
        int type = query[0];
        int x = query[1];
        int y = query[2];

        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            seqList[idx].push_back(y);
        }
        else {
            lastAnswer = seqList[idx][y % seqList[idx].size()];
            result.push_back(lastAnswer);
        }
    }

    return result;
}