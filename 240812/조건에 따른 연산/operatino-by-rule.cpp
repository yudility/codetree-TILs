#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, cnt;

int main() {

    cin >> n;

    while(true){

        if(n>=1000) break;

        cnt++;
        if(n%2==0) n= n*3+1;
        else n=n*2+2;

    }

    cout << cnt; 
    return 0;
}