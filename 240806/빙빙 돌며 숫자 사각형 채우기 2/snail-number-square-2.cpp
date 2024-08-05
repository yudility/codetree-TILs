#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int MAX = 102;
const int dy[4]={1, 0, -1, 0};
const int dx[4]={0, 1, 0, -1};
int n, m, a[MAX][MAX], visited[MAX][MAX];


bool inRange(int y, int x){
    return (y >= 0 && y < n && x >=0 && x < m  );
}

int main() {

    cin >> n >> m;
    int x=0, y=0, dir=0;
    a[y][x] = 1;

    while(a[y][x]< n*m && inRange(y, x)){
        
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if(!inRange(ny, nx) || a[ny][nx] !=0 ){
            dir = (dir+1)%4;
            ny = y + dy[dir];
            nx = x + dx[dir];
        }
        a[ny][nx] = a[y][x]+1;

        y = y + dy[dir];
        x = x + dx[dir];
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}