#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a, b, ret; 

int main() {

    cin >> a >> b;

    for(int i=a; i<=b; i++){
        if(i%6==0 && i%8!=0) ret+=i;
    }

    cout << ret;


    return 0;
}