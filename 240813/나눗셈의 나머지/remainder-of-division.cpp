#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a, b, n[10],idx;

int main() {

    cin >> a >> b;

    while(a>1){
        idx = a%b;
        n[idx]++;
        a = a/b;
    }

    int sum=0;
    for(int i=0; i<10; i++){
        if(n[i]==0) continue;
        sum=sum+(n[i]*n[i]);
    }
    cout << sum;

    return 0;
}