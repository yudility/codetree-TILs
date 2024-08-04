#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
int a[MAX][MAX], n, m;
int dy[] = {1,0,-1,0};
int dx[] = {0,1,0,-1};

bool inRange(int y, int x){
    return (y >= 0 && y < n && x >= 0 && x < n);
}

bool isComfort(int y, int x){
    int cnt=0;
    for(int i=0; i<4; i++){
        int ny=y+dy[i];
        int nx=x+dx[i];
        if(!inRange(ny, nx)) continue;
        if(a[ny][nx]) cnt++; 
    }

    return (cnt==3);
}


int main() {

    cin >> n >> m;

    for(int  i=0; i<m; i++){
        //칠한다
        //편안한 상태인지 확인한다
        int y, x;
        cin >> y >> x;

        a[y-1][x-1] = 1;
        cout << isComfort(y-1, x-1) << "\n";
    }

    return 0;
}