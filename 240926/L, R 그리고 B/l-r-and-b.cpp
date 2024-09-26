#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char m[10][10];
int lx, ly, bx, by, rx, ry, ret;


int main() {

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin >> m[i][j];
            if(m[i][j]=='B'){
                bx=j;
                by=i;
            }
            if(m[i][j]=='L'){
                lx=j;
                ly=i;
            } 
            if(m[i][j]=='R'){
                rx=j;
                ry=i;
            }  
        }
    }
    ret = abs(lx-bx)+abs(ly-by)-1; 

    if((lx==rx && rx==bx) || (ly==ry && ry==by)){
        ret+=2;
    }

    cout << ret;


    return 0;
}