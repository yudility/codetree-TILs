#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a[100],ret;

int main() {
    
    cin >> n;

    for(int i=0; i<n ; i++){
        cin >> a[i];
    }

    for(int k=1; k<=100; k++){ // 가운데 값 정하기      
        int cnt=0;
        for(int i=0; i<n; i++){ // ai 정하기
            for(int j=i+1; j<n; j++){ // aj 정하기
                if((a[i]+a[j]/2 == k)) cnt++;
            }
        }
        ret = max(ret, cnt);
    }

    cout << ret;

    return 0;
}