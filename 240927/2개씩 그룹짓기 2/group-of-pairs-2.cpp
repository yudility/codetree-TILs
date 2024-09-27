#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int MAX_V=1000000000;
int n, ret=MAX_V;
vector<int> v;

int main() {

    cin >> n;

    for(int i=0; i<2*n; i++){
        int e;
        cin >>e;
        v.push_back(e);
    }

    sort(v.begin(),v.end());

    for(int i=0; i<n; i++){
        ret=min(ret, v[n+i]-v[i]);
    }

    cout <<ret; 




    return 0;
}