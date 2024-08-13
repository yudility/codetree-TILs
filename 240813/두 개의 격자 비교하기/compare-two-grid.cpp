#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, m, a[10][10], ret[10][10], b;

int main() {

    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> b;
            if(a[i][j]!=b) ret[i][j]=1;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << ret[i][j]<< " ";
        }
        cout << "\n";
    }


    return 0;
}