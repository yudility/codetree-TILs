#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a[100], b[100];

int main() {

    cin >>n;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }

    int cnt=0;
    
    for(int i=0; i<n; i++){
        if(a[i]>b[i]){
            a[i+1]+=(a[i]-b[i]);
            cnt+=(a[i]-b[i]);
        }
    }
    
    cout << cnt;

    return 0;
}