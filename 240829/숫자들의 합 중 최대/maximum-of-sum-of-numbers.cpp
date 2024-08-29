#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int x, y, ret;

int main() {
    cin >> x >> y;

    for(int i=x; i<=y; i++){
        int t=i;
        int sum=0;
        while(t>0){
            sum += (t%10);
            t/=10;
        }
        ret = max(ret, sum);
    }

    cout << ret;

    return 0;
}