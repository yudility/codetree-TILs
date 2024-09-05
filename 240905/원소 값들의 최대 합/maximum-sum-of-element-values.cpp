#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, m, a[102], ret;

int main() {

    cin >> n >> m; 

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    for(int i=0; i<n; i++){ //i는 시작위치
        int sum=a[i];//5
        int next=a[i];//5
        for(int j=1; j<m; j++){ // j는 움직임 횟수
            sum+=a[next-1]; //+3
            next=a[next-1]; //3
        }
        ret=max(ret, sum);
    }

    cout << ret;
    return 0;
}