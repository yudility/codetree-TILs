#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a[100];

int main() {

    cin >>n;
    for(int i =0; i< n; i++){
        cin >> a[i];
    }

    int idx=n-2;
    while(idx>=0 && a[idx] < a[idx+1]){
        idx--;
    }

    cout << idx+1;


    return 0;
}