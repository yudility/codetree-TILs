#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, s, a[100], ret=987654321;

int main() {

    cin >> n >> s;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int sum=0;
            for(int k=0; k<n; k++){
                if(k==i || k==j) continue;
                sum+=a[k];
            }
            ret = min(ret, abs(s-sum));
        }
    }

    cout << ret; 


    return 0;
}