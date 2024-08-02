#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    float a, b;
    cin >> a >> b;

    cout << round((a+b)/(a-b)*100)/100 ;
    
    return 0;
}