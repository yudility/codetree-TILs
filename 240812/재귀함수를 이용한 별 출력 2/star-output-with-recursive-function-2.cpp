#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;

void ps(int x){
    if(x<1) return;

    for(int i=0; i<x; i++){
        cout << "* ";
    }
    cout << "\n";
    ps(x-1);
    for(int i=0; i<x; i++){
        cout << "* ";
    }
    cout << "\n";



}

int main() {

    cin >> n;

    ps(n);

    return 0;
}