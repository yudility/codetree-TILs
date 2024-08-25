#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, cnt, a, b, c;

int main() {
    
    cin >> n;
    cin >> a >>  b >> c;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                if(abs(a-i)<=2 ||abs(b-j)<=2 || abs(c-k)<=2 ){
                    cnt++;
                }
            }
        }
    }
    
    cout << cnt;

    return 0;
}