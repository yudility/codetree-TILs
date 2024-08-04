#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, cnt, now=1002;
int a[2004];

int main() {
    
    cin >> n;
    a[0]=1;

    for(int i=0; i<n; i++){
        int x;
        char d;
        cin >> x >> d;

        for(int j=0; j<x; j++){
            if(d=='R') now++;
            else now--;
            a[now]++;
        }
    }

    for(int i=0; i<2004; i++ ){
        if(a[i]>=2) cnt++;
    }

    cout << cnt;

    return 0;
}