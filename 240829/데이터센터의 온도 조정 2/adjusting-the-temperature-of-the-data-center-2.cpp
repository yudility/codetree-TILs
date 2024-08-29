#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, c, g, h, ta[1000], tb[1000], ret;

int main() {

    cin >> n >> c >> g >> h;

    int max_t = max(c, max(g,h));
    int min_t = min(c, min(g,h));

    for(int i=0; i<n; i++){
        cin>> ta[i] >> tb[i];
    }

    for(int i=min_t; i<=max_t ; i++){ // i : 현재 온도 
        int sum =0;
        for(int j=0; j<n ; j++){ // j : 장비 번호
            if( ta[j] > i ) {
                sum+= c;
            } 
            else if( ta[j] <= i && tb[j] >= i ){
                sum+= g;
            }
            else if( tb[j] < i){
                sum+= h;
            }
        }

        ret=max(ret, sum);

    }

    cout << ret;

    return 0;
}