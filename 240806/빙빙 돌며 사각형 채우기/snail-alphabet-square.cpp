#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
int dy[4]={0, 1, 0, -1};
int dx[4]={1, 0, -1, 0};
int n, m, x, y, dir, a[MAX][MAX], visited[MAX][MAX];

bool inRange(int y, int x){
    return (y >= 0 && y < n && x >=0 && x < m  );
}

int main() {

    cin >> n >> m;

    memset(visited, 0, sizeof(visited));

    int i=0;
    a[y][x]=0;
    visited[y][x]=1;


    while(i<n*m-1){  
        int ny, nx;  
        for(int i=0; i<4; i++){
            dir = (dir+i)%4;
            ny = y+dy[dir];
            nx = x+dx[dir];
            if( !inRange(ny, nx) || visited[ny][nx]==1) continue;
            else break;
        }
        
        a[ny][nx] = a[y][x]+1;
        visited[ny][nx]=1;
        y=ny;
        x=nx;
        i++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char alpa=65+(a[i][j])%92;
            cout << alpa << " ";
        }
        cout << "\n";
    }

    return 0;
}