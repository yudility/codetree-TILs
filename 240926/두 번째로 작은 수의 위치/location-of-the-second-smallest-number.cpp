#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a[101], num[101];

int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
        num[a[i]]++;
    }

    int value=-1;
    bool find=false;
    for(int i=1; i<=100; i++){
        if(num[i]>=1){
            for(int j=i+1; j<=100; j++){
                if(num[j]==1){
                    find=true;
                    value=j;
                    break;
                }
            }
            if(find) break;
        }
    }

    if(!find) cout << -1;
    else{
        for(int i=0; i<n; i++){
            if(a[i]==value){
                cout << i+1;
                break;
            }
        }
    }
    

    return 0;
}