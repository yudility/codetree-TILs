#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, l, a[100], ret;
const int MAX_H=100;

int main() {
    
    cin >> n >> l;
    
    for(int i=0; i<n; i++)
        cin >> a[i];

    for(int h=0; h<=MAX_H; h++){
        int h_cnt=0;
        int h_1_cnt=0;

        for(int i=0; i<n; i++){
            if(a[i]>=h) h_cnt++;
            else if(a[i]+1==h) h_1_cnt++;
        }

        if(h_cnt >=h){
            ret=max(ret,h);
        }
        if(h_1_cnt <=l && (h_1_cnt+h_cnt) >=h){
            ret=max(ret,h);
        }
        
    }

    cout << ret;

    return 0;
}