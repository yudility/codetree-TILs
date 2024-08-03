#include <iostream>
using namespace std;

const int dx[4]={0, 1, -1, 0}; // D, L, R, U
const int dy[4]={1, 0, 0, -1};
int n, t, r, c, dir, y, x;
char d;

bool inRange(int y, int x){
    return ( y >= 0 && x >= 0 && y < n && x < n);
}

int main() {

    cin >> n >> t;
    cin >> r >> c >> d;

    y=r-1;
    x=c-1;

    if(d=='U') dir=3;
    else if(d=='R') dir=1;
    else if(d=='L') dir=2;
    else if(d=='D') dir=0;

    while(t>0){
        int ny = y + dy[dir];
        int nx = x + dx[dir];
        
        //벽과 만나는 경우, 그 자리 그대로 하고 방향만 바꾼다

        if(!inRange(ny, nx)){
            dir = 3 - dir; // 방향 뒤집기는 3-방향
        }
        else{ //아니라면 해당 방향으로 이동
            y=ny;
            x=nx;
        }
    
        t--;
    }

    cout << y+1 << " " << x+1;

    
    return 0;
}