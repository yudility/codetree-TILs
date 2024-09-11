#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a, b, c, d, start_x, end_x, cnt;

int main() {

    cin >> a >> b;
    cin >> c >> d; 

    start_x = min(a, c);
    end_x= max(b,d);

    for(int i=start_x; i<end_x; i++){
        if( (a<= i && b> i) ||(c<=i && d>i)){
            cnt++;
        }
    }

    cout << cnt;
    
    return 0;
}