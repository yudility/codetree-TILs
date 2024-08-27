#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a[100][2], ret=987654321;

int main() {

    cin >> n;

    for(int i=0; i<n ; i++){
        cin >> a[i][0] >> a[i][1];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int pd = (a[i][0]-a[j][0])*(a[i][0]-a[j][0]) + (a[i][1]-a[j][1])*(a[i][1]-a[j][1]);

            ret=min(ret, pd);
        }
    }

    cout << ret;
   

    return 0;
}