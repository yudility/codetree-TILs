#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, cnt, now=501;
int a[1002];

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

    for(int i=0; i<1002; i++ ){
        if(a[i]>=2) cnt++;
    }

    cout << cnt;

    return 0;
}