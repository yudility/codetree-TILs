#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, x[100], y[100], p[4], ret=987654321;

int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }

    bool flag=false;

    for(int i=0; i<=100; i++){ // x축 고르기
        for(int j=0; j<=100; j++){ //y축 고르기
            memset(p, 0, sizeof(p)); 

            for(int k=0; k<n; k++){
                if(x[k]<i && y[k] > i ) p[0]++;
                else if(x[k]>i && y[k] > i ) p[1]++;
                else if(x[k]>i && y[k] < i ) p[2]++;
                else if(x[k]<i && y[k] < i ) p[3]++;
            }
            
            int m=0;
            for(int a : p){
                m = max(m, a);
            }

            ret=min(ret, m);
            
            if(ret==(n/4)){
                flag=true;
                break;
            }
        }
        if(flag) break;
    }

    cout<< ret;
    
    return 0;
}