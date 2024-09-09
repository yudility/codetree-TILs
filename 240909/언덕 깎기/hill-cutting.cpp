#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, hill[1000], ret=1000000, max_h, min_h=100;

int main() {
    
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> hill[i];
        max_h=max(max_h, hill[i]);
        min_h=min(min_h, hill[i]);
    }

    if(max_h-min_h<= 17){
        cout << 0;
        return 0;
    }

    for(int h=min_h; h<=max_h; h++){
        int cost=0;
        for(int i=0; i<n;i++){
            int x=0;
            if(hill[i]<h){
                x=h-hill[i];
            }  
            else if(hill[i]> h+17){
                x=h+17-hill[i];
            }
            cost+=(x*x);
        }
        ret=min(ret, cost);
    }

    cout << ret;


    return 0;
}