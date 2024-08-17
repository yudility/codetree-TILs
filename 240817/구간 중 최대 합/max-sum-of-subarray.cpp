#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int MAX_ = 100;
int n, k, a[MAX_], ret;

int main() {

    cin >> n >> k;
    
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n-k; i++){
        int sum=0;
        for(int j=0; j<k; j++){
            sum+=a[i+j];
        }
        ret = max(ret, sum);
    }

    cout << ret;

    return 0;
}