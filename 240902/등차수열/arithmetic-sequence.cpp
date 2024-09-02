#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a[100], cnt;

int main() {
    
    cin >> n;

    for(int i=0; i<n ; i++){
        cin >> a[i];

    }

    for(int i=0; i<n; i++){ // ai 정하기
        for(int j=i+1; j<n; j++){ // aj 정하기
            int max_n=max(a[i], a[j]);
            int min_n=min(a[i], a[j]);
            if(max_n-min_n <= 1) continue;
            for(int k=min_n; k<max_n; k++){ // 가운데 값 정하기
                if(a[i]!=k && a[j]!=k && abs(a[i]-k)==abs(k-a[j])) cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}