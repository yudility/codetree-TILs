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
        if(v[j] - v[j-1]>k) return false;
    }

    return true;
}

int main() {

    cin >> n >> k;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int ret;
    for(int u=n; u>=1; u--){
        if(isPossible(u)) {
            ret=u;
        }
        else{
            break;
        }
    }

    cout << ret;

    return 0;
  
}