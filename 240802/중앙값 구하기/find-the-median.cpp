#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b, c, mid;

    cin >> a >> b >> c;

    if( a > b ){
        if(  b > c ) cout << b;
        else{ // b < c
            if( a > c ) cout << c;
            else cout << a;   
        }
    }  
    else{ // a < b
        if( a > c) cout << a;
        else{// a < c
            if( b > c ) cout << c;
            else cout << b ;
        }
    }

    // vector<int> v;
    // int n;

    // for(int i=0; i<3; i++) {
    //     cin >> n;
    //     v.push_back(n);
    // }

    // sort(v.begin(), v.end());

    // cout << v[1];

    return 0;
}