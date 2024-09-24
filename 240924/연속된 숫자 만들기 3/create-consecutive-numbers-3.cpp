#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a[3];

int main() {
    
    cin >> a[0] >> a[1] >> a[2];
    
    int left = a[1]-a[0];
    int right = a[2]-a[1];

    int ret= left>right? left-1:right-1;

    cout<< ret;
    


    return 0;
}