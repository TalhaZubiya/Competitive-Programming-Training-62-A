#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x); 
    }
    cout <<"Total unique elements: " <<s.size()<< endl;
    cout <<"Elements in sorted order: ";
    for(auto y=s.begin(); y!= s.end(); y++) {
        cout << *y<< " ";
    }
    cout << endl;

    int target;
    cin>>target;
    if(s.count(target)) {
        cout<<target<<" is present in the set." <<endl;
    } else {
        cout<<target<<" is not present in the set." <<endl;
    }

    return 0;
}
