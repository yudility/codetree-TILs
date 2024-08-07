#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int r, c, a[20][20], ret;
char color;

int main() {

    cin >> r >> c;
    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> color;
            if(color=='B') a[i][j]=1;
        }
    }

    int now=a[0][0];
    for(int i=1; i<r; i++){
        for(int j=1; j<c; j++){
            if(a[i][j] != now){
                for(int k=i+1; k<r-1; k++){
                    for(int h=j+1; h<c-1; h++){
                        if( a[k][h] != a[i][j] && a[k][h] != a[r-1][c-1]) ret++;
                    }
                }
            }
        }
    }

    cout << ret;
    
    return 0;
}