#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int a[10];

int main() {

    for(int i=0; i<10;i++){
        cin >> a[i];
        if(a[i]%3==0){
            cout << a[i-1];
            break;
        }
    }
    
    

    return 0;
}