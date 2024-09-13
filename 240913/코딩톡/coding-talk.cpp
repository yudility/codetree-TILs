#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, m, u[100], p, isRead[26];
char c[100];

int main() {

    cin >> n >> m >> p;

    for(int i=0; i<m; i++){
        cin >> c[i] >> u[i];
    }

    
    for(int i=m; i>=p-1; i--){
        isRead[(int)(c[i]-65)]++; //보낸 사람은 읽었음
        if(i==(p-1) && u[i-1]==u[i]){
            for(int j=1; j<=p-1; j++){
                if(u[i]==u[i-j]) isRead[(int)(c[i-j]-65)]++;
                else break;
            }
        }
    }
    
    

    for(int i=0; i<n; i++){
        if(isRead[i]==0){
            cout<< (char)(i+65) <<" ";
        }
    }
    



    return 0;
}