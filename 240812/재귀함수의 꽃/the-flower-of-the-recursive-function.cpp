#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;

void PrintN (int x){
    if(x < 1) return;

    cout << x << " ";
    PrintN(x-1);
    cout << x << " ";
}


int main() {
    
    cin >> n;
    PrintN(n);
    return 0;
}