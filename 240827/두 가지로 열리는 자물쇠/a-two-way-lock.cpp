#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, a[2][3], ret;


int find_key(int x, int y, int z){
    
    int isKey=0;

    for(int i=0; i<2; i++){
        int d1= abs(a[i][0]-x);
        int d2= abs(a[i][1]-y);
        int d3= abs(a[i][2]-z);
        if((d1 <= 2 || d1 >=n-2) && (d2 <= 2 || d2 >=n-2) && (d3 <= 2 || d3 >=n-2) ) isKey++;
    }

    if(isKey>=1) return 1;
    else return 0;

}


int main() {

    cin >> n;

    for(int i=0;i<2; i++){
        for(int j=0;j<3; j++){
            cin >> a[i][j];
        }
    }

    for(int i=1;i<=n; i++){
        for(int j=1;j<=n; j++){
            for(int k=1;k<=n; k++){
                ret+= find_key(i, j, k);        
            }
        }
    }

    cout << ret; 

    return 0;
}