#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int n, k, b[101], max_b, ans;
map<int, int> h;
//100만까지 안되면 그냥 min max로 범위 줄이기

int main() {

    cin >> n >> k;

    for(int i=0; i<n; i++){
        cin >>b[i];
    }

    for(int i=0; i<n; i++){
        int num=b[i];
        int prev=i;
        if(h.find(num)!=h.end()) continue;
        for(int j=i+1; j<n; j++){
            if( b[j]==num && prev-j <= k){
                if(h.find(num)==h.end()){
                    h[num]=0;
                }
                else{
                    h[num]++;
                }
                prev=j;
            } 
        }
        if(h[num]>max_b){
            ans=num;
            max_b=h[num];
        }
    }

    cout << ans; 

    
    return 0;
}