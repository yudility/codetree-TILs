#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int dy[4]={-1, 0, 1, 0}; // 시계 방향 회전
const int dx[4]={0, 1, 0, -1};
int sy, sx, y, x, cnt, dir;
string s;
bool flag=0;

int main() {

    cin >> s;
    
    for(int i=0; i<s.size(); i++){

        if(s[i]=='F'){ //앞으로 이동
            y=y+dy[dir];
            x=x+dx[dir];
        }
        else{ //회전
            if(s[i]=='L') dir = (dir+1)%4;
            else if(s[i]=='R') dir = (dir+3)%4;
        }
        cnt++;

        if(y==sy && x==sx){
            flag = 1;
            break;
        }
    }

    if(flag){
        cout << cnt <<"\n";
    }
    else{
        cout << -1 <<"\n";
    }

    return 0;
}