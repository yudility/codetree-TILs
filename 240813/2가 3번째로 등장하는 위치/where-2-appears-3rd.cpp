#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a, cnt, ret;

int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a;
        if(a==2) cnt++;
        if(cnt==3){
            ret=i+1;
            break;
        }
    }

    cout << ret;

    return 0;
}