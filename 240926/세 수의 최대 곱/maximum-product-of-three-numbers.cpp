#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, ret;
vector<int> a;

int main() {

    cin >> n;

    for(int i=0; i<n; i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }
    
    sort(a.begin(), a.end());

    ret=max(a[n-1]*a[n-2]*a[n-3], a[0]*a[1]*a[n-1]);

    cout << ret;

    
    return 0;
}