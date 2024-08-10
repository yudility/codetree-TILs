#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;

void printHello(int x){
    if(x==0) return;

    cout << "HelloWorld\n";
    printHello(x-1);
}

int main() {
    cin >> n;

    printHello(n);
    
    return 0;
}