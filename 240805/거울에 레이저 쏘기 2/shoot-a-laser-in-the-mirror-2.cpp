#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
int dy[4]={1, 0, -1, 0};
int dx[4]={0, -1, 0, 1};
int n, k, cnt;
char a[MAX][MAX];
string s;

bool inRange(int y, int x){
    return (y >= 0 && y < n && x >= 0 && x < n );
}


int main() {
    
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> s;
        for(int j=0; j<s.size(); j++){
            a[i][j] = s[j];
        }
    }

    cin >> k;

    //시작점과 방향 구하기
    int dir = k / n;
    int y, x;

    if(dir==0){
        y = 0; 
        x = (k-1) % n;
    } 
    else if(dir==1){
        x = n-1; 
        y = (k-1) % n;
    }
    else if(dir==2){
        y = n-1;
        x = (n-1)-(k-1) % n;
    }
    else{
        x = 0;
        y = (n-1)-((k-1) % n);
    }

    while(inRange(y, x)){
        
        cnt++;
        
        if(a[y][x]=='\\'){ //여기 수정하기
           dir = 3 - dir;
        }   
        else{ // '/'인 경우
            if(dir % 2 == 0) dir = (dir+1)%4;
            else dir = (dir-1)%4;
        }

        y = y + dy[dir];
        x = x + dx[dir];

    }

    cout << cnt ;

    return 0;
}