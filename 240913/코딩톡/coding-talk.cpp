#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, m, u[100], p, visited[26];
char c[100];

int main() {

    cin >> n >> m >> p;

    for(int i=0; i<m; i++){
        cin >> c[i] >> u[i];
    }

    if(u[p-1]>0){
        for(int i=p-1; i<m; i++){
            visited[(int)(c[i]-65)]++;
            if(p>=2 && c[i-1]!=c[i] && u[i-1]==u[i]){
                visited[(int)(c[i-1]-65)]++;
            }
        }

        for(int i=0; i<n; i++){
            if(visited[i]==0){
                cout<< (char)(i+65) <<" ";
            }
        }
    }



    return 0;
}