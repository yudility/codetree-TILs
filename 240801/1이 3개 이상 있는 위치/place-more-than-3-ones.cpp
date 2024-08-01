#include <iostream>
using namespace std;

int n, a[101][101], cnt;
int dy[4]={1, 0, -1, 0};
int dx[4]={0, -1, 0, 1};

bool inRange(int y, int x){
    return (y>=0 && y < n && x >=0 && x < n);
}

bool nearby( int y, int x ){
    int count=0;
    for(int i=0; i<4; i++){
        int ny = y+dy[i];
        int nx = x+dx[i];
        if(inRange(ny, nx) && a[ny][nx]==1) count++;
    }
    return (count>=3);
}

int main() {
    
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(nearby(i, j)) cnt++;
        }
    }

    cout << cnt;

    return 0;
}