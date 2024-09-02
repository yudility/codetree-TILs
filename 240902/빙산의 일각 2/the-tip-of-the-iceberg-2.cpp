#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, h[1002], max_h, min_h=987654321, ret;

int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> h[i];
        max_h=max(max_h, h[i]);
        min_h=min(min_h, h[i]);
    }

    for(int i=min_h; i<=max_h; i++){ // 높이 설정
        int cnt=0;

        for(int j=0; j<n; j++){ // 빙산 한 칸씩 돌기
            if(h[j]> i && h[j+1] <= i) cnt++;
        }

        ret=max(ret, cnt);
    }

    cout << ret;

    return 0;
}