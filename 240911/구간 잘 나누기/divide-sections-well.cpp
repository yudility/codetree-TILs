#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int MAX_H=10000;
int n, m, a[100];

int main() {

    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int ret=MAX_H;
    
    for(int i=1; i<=MAX_H; i++){
        
        int section=1;
        bool isOver=false;

        int sum=0;
        for(int j=0; j<n; j++){
            if(a[j]>i){
                isOver=true;
                break;
            }

            if(sum+a[j]>i){
                section++;
                sum=0;
            }

            sum+=a[j];
        }
    
        if(!isOver && section<=m ){
            ret=min(ret, i);
        }
    }

    cout << ret;


    return 0;
}