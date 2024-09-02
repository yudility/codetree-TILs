#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a, b, c, ret;

int main() {
    
    cin >> a >> b >> c;

    for(int i=0; a*i<=c ; i++){
        for(int j=0; b*j<=c; j++){
            int sum= (a*i)+(b*j);
            if(sum<=c){
                ret=max(ret,sum);
            }
        }
    }

    cout << ret;

    return 0;
}