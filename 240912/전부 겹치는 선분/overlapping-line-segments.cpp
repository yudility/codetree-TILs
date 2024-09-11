#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, x1[100], x2[100], min_x1, max_x2;

int main() {
    
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x1[i] >> x2[i];
        min_x1=min(min_x1, x1[i]);
        max_x2=max(max_x2, x2[i]);
    }

    bool isIntersect=false;

    for(int i=min_x1; i<=max_x2; i++){
        int cnt=0;
        for(int j=0; j<n; j++){
            if(x1[j] <= i && i <= x2[j] ){ //i가 선분의 시작과 끝 안에 있다면
                cnt++;
            }
        }
        if(cnt == n){
            isIntersect=true;
            break;
        }
    }

    if(isIntersect) cout <<"Yes";
    else cout << "No";

    return 0;
}