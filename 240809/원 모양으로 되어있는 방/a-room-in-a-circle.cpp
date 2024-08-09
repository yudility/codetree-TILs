#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a[1005], ret=987654321;

int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        int j=0; //시작 방과의 거리
        int dist=0; // 총 거리
        while(j<n){
            dist += (a[(i+j)%n] * j); // 이동해야하는 인원 수 * 시작 방과의 거리
            j++;            
        }
        ret = min(ret, dist);
    }

    cout << ret;

    return 0;
}