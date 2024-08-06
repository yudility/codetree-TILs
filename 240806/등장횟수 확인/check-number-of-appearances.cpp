#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int cnt=0, a;

    for(int i=0; i<5; i++){
        cin >> a; 
        if(a%2==0) cnt++;
    }
    cout << cnt;
    
    return 0;
}