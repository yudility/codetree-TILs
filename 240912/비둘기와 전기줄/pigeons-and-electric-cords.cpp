#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, b[100], pos[100], num[100];

int main() {

    memset(b, -1, sizeof(b));

    cin >> n;
    
    for(int i=0; i<n; i++){
        cin>> num[i] >> pos[i];
    } 

    int cnt=0;
    for(int i=0; i<n; i++){
        if(b[num[i]] == -1){
            b[num[i]]=pos[i];
        }
        else if(b[num[i]] != pos[i]){
            b[num[i]] = pos[i];
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}