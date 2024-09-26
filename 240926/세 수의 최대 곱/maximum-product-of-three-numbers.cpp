#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a[100001], p1, p2, p3, m1, m2,ret;

int main() {

    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> a[i];
        p1=min(p1, a[i]);
    }

    for(int i=0; i<n; i++){
        if(p1<a[i]){
            p3=p2;
            p2=p1;
            p1=a[i];
        }
        else if(p2<a[i]){
            p3=p2;
            p2=a[i];
        }
        else if(p3<a[i]){
            p3=a[i];
        }

        if(m1>a[i]){
            m2=m1;
            m1=a[i];
        }
        else if(m2>a[i]){
            m2=a[i];
        }
    } 

    ret=max(p1*p2*p3, p1*m1*m2);

    cout << ret;

    
    return 0;
}