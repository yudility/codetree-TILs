#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a[100], b, idx;

int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> b;
        if (b%2==0){
            a[idx]=b;
            idx++;
        } 
    }
    for(int i=1; i<=idx; i++){
        cout<< a[idx-i] <<" ";
    }


    return 0;
}