#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, x1[100], x2[100], end_x, start_x=100;

int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x1[i] >> x2[i];
        start_x=min(start_x, x1[i]);
        end_x=max(end_x, x2[i]);
    }

    bool flag=false;

    for(int i=start_x; i<end_x; i++){ //겹치는 지점
        int cnt=0;
        for(int j=0; j<n; j++ ){
            if(x1[j]<= i && i<=x2[j]){
                cnt++;
            }
        }
        if(cnt==n-1){
            flag=true;
            break;
        }
    }

    if(flag){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    

    return 0;
}