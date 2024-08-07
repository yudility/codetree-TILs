#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n, a[102],cnt; 

int main() {
    cin >> n;

    for(int i=0; i<n ; i++){
        cin >> a[i];
    }

    for(int i=0; i<n ; i++){
        for(int j=i+1; j<n ; j++){
            for(int k=j+1; k<n ; k++){
                if(a[i]<= a[j] && a[j] <= a[k] && a[i]<= a[k] ) cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}