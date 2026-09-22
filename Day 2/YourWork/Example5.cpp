#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> s;

    s.push_back(2);
    s.push_back(1);
    s.push_back(3);
    s.push_back(4);
    s.push_back(5);

    int result = count(s.begin(), s.end(), 2);

    cout << result;

    return 0;
}
