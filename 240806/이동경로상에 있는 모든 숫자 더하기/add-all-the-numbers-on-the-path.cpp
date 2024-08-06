#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int MAX=100;
int dy[4]={-1, 0, 1, 0};
int dx[4]={0, 1, 0, -1};
int n, t, y, x, dir, sum, a[MAX][MAX];
string s;

bool inRange(int y, int x){
    return (y >= 0 && y < n && x >= 0 && x < n);
}

int main() {

    cin >> n >> t;

    cin >> s;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    y=n/2; x=n/2;
    sum = a[y][x];

    for(int i=0; i<s.size(); i++){
        int ny, nx;
        if(s[i]=='L'){
            dir=(dir+3)%4;
        }
        else if(s[i]=='R'){
            dir=(dir+1)%4;
        }
        else if(s[i]=='F'){
            ny=y+dy[dir];
            nx=x+dx[dir];
            if(!inRange(ny, nx)) continue;

            sum+= a[ny][nx];
            y=ny;
            x=nx;
        }
    }

    cout << sum ;

    
    return 0;
}