#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n, x, y, ny, nx, d;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1}; // E, S, W, N 
char way;

void move(char w, int dist){
    if(w=='E')  x+=dist*dx[0], y+=dist*dy[0];
    else if(w=='S') x+=dist*dx[1], y+=dist*dy[1];
    else if(w=='W')  x+=dist*dx[2], y+=dist*dy[2];
    else if(w=='N')  x+=dist*dx[3], y+=dist*dy[3];
}

int main() {
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> way >> d;
        move(way, d);
    }

    cout << x << " " << y;

    return 0;
}