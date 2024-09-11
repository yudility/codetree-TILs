#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int x1, x2, x3, x4;

int main() {

    cin >> x1 >> x2 >> x3 >> x4;

    bool flag=true;

    if(x2<x3 || x1>x4){ 
        flag =false;

    }

    if(flag){
        cout<< "intersecting";
    }
    else{
        cout << "nonintersecting";
    }
    
    return 0;
}