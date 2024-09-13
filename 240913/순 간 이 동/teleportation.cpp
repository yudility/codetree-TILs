#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a, b, x, y, ret;

int main() {


    cin >> a >> b >> x >> y;

    int s = min(a, b);
    int e = max(a, b);
    int t_s, t_e;
    
    if(abs(s-x) < abs(s-y)){
        t_s=x;
        t_e=y;
    }
    else{
        t_s=y;
        t_e=x;
    }

    ret=(e-s, abs(t_s-s)+abs(t_e-e));

    cout << ret;

    return 0;
}