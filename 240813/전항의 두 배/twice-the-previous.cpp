#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a, b, c[10]; 

int main() {

    cin >> a >> b;

    c[0]=a; c[1]=b;

    for(int i=0; i<8; i++){
        c[i+2]= c[i+1]+2*c[i];
    }

    for(int i=0; i<10; i++){
        cout<< c[i] << " ";
    }


    return 0;
}