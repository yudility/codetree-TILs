#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a;
bool flag=false;

int main() {

    for(int i=0; i<5; i++){
        cin >> a;
        if(a%3!=0) flag = true;
    }

    if(flag) cout<< 0;
    else cout <<1;


    return 0;
}