#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& a, int target) {
    int l = 0, h = a.size() - 1;

    while(l <= h) {
        int mid = (l + h) / 2;

        if(a[mid] == target) {
            return mid;
        if(a[mid] < target) {
            l = mid + 1;
        } 
        else {
            h = mid - 1;
        }
    }
    return -1;
}
}

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> a(n);
    for(int i = 0; i < n; i++) 
    cin >> a[i];

    sort(a.begin(), a.end()); 

    int index = binarySearch(a, target);
    if(index != -1) {
        cout << "Found at index " << index << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}
