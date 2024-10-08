#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, k, a[101];

bool isPossible(int upper){
    vector<int> v;
    for(int i=0; i<n; i++){
        if(a[i]<=upper) v.push_back(i);
    }

    for(int j=1; j<v.size(); j++){
        if((v[j] - v[j-1])>k){
            return false;
        }
    }

    return true;
}

int main() {

    cin >> n >> k;
    int max_num=100;
    for(int i=0; i<n; i++){
        cin >> a[i];
        max_num=max(max_num, a[i]);

    }

    int ret=100;
    for(int u=100; u>=max(a[0], a[n-1]); u--){
        if(isPossible(u)) {
            ret=min(ret, u);
        }
    }

    cout << ret;

    return 0;
  
}