#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int x, y, n[10], ret;

int main() {

    cin >> x >> y;

    for(int i=x; i<=y; i++){

        memset(n, 0, sizeof(n));

        int t=i;
        int cnt=0;
        while(t>0){
            n[(t%10)]++;
            t=t/10;
            cnt++; // 자리수
        }

        for(int j=0; j<10; j++){
            if(n[j]==cnt-1){
                ret++;
                break;
            }
        }

    }

    cout << ret;

    return 0;
}