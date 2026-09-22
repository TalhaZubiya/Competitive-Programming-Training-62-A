#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> s;

    s.push_back(2);
    s.push_back(1);
    s.push_back(3);
    s.push_back(4);
    s.push_back(5);

    sort(s.begin(), s.end());

    for (int i=0;i<s.size();i++) {
        cout << i << " ";
    }

    return 0;
}
