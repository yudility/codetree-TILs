#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int MAX=100;
int n, a[MAX][MAX], dir;
int dy[4]={0, -1, 0, 1}; 
int dx[4]={1, 0, -1, 0};

bool inRange(int y, int x){
    return (y >= 0 && y < n && x >=0 && x < n  );
}

int main() {

    cin >> n;

    int y = n/2;
    int x = n/2; 

    a[y][x]=1;
    int d=1; // 이동할 칸 수
    int r=0; // 회전 수
    while(a[y][x]< n*n){
        
        for(int i=0; i<d; i++){
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            a[ny][nx] = a[y][x]+1;
            y=ny;
            x=nx;
        }
       
        //마지막에 방향을 바꾼다
        dir= (dir+1)%4;
        r++;
        
        // 방향을 두번 꺾으면 d를 +1해야함
        if(r==2){
            d++;
            r=0;
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] <<" ";
        }
        cout << "\n";
    }
    return 0;
}