#include <bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    vector<int> result;

    for (string query : queries) {
        int count = 0;

        for (string str : stringList) {
            if (str == query)
                count++;
        }

        result.push_back(count);
    }

    return result;
}