#include <iostream>
using namespace std;

const int MAX = 2004;
const int dy[4]={0, 1, 0, -1}; // E S W N
const int dx[4]={1, 0, -1, 0};
int  a[MAX][MAX], n;
int sy=1000, sx=1000;
bool flag=0;

bool inRange(int y, int x){
    return ( y >= 0 && x >=0 && y < MAX && x < MAX );
}

int getDir(char c){
    int dir;

    if(c=='E') dir=0;
    else if(c=='S') dir=1;
    else if(c=='W') dir=2;
    else if(c=='N') dir=3;

    return dir;
}

int main() {

    cin >> n;

    int y, x;

    a[sy][sx]=0;
    y=sy;
    x=sx;

    for(int i=0; i<n; i++){

        int f;
        char d;

        cin >> d >> f;

        if(flag) continue;

        int dir = getDir(d);

        while(f>0){
            int ny= y+dy[dir];
            int nx= x+dx[dir];
            
            f--;
            if(ny == sy && nx == sx) { //시작점으로 돌아온 경우
                a[ny][nx] = a[y][x]+1;
                flag=1;
                break;
            }
            else if(inRange(ny, nx)){ //시작점은 아니지만 범위 내인 경우
                a[ny][nx] = a[y][x]+1;
                y=ny; x=nx;
            }
            
        }
    }

    if(flag){
        cout << a[sy][sx] <<"\n";
    }
    else{
        cout << -1 <<"\n";
    }

    return 0;
}