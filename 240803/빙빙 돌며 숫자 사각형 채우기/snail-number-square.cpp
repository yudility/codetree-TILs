#include <iostream>
using namespace std;

const int MAX = 100;

const int dy[4]={0, 1, 0, -1}; // dir = 0, 1, 2, 3, 0, 1, 2, 3,...
const int dx[4]={1, 0, -1, 0};
int visited[MAX][MAX], a[MAX][MAX], n, m, dir;
bool flag=true;

bool inRange(int y, int x){
    return ( y >= 0 && x >=0 && y < n && x < m );
}


int main() {

    cin >> n >> m;

    dir=0;
    
    a[0][0]=1;
    visited[0][0]=1;

    int y=0, x=0;

    // (nx, ny)가 직사각형 안에 들어오면서, 그 위치에 방문한 적이 없어야만 함
    while(a[y][x]< n*m){
        
        int ny= y+dy[dir];
        int nx= x+dx[dir];

        if(!inRange(ny, nx) || visited[ny][nx]){
            dir= (dir+1)%4;
            continue;
        }

        a[ny][nx]=a[y][x]+1;
        visited[ny][nx]=1;
        y=ny; x=nx;
    }


    //출력

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}