#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a[3], d1, d2;

int main() {

    for(int i=0; i<3; i++){
        cin >> a[i];
    }

    sort(a, a+3);

    d1=a[1]-a[0];
    d2=a[2]-a[1];

    if(d1==1 && d2==1) cout << 0;
    else if(d1==2 || d2==2) cout << 1;
    else cout << 2;

    return 0;
}