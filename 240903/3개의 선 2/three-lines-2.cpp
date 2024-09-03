#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, x[20], y[20], ret;

int main() {
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }

  
    for(int i=0; i<=10; i++){ // 선 하나 좌표 고르고
        for(int j=0; j<=10; j++){ // 두번째 선 좌표 고르고
            for(int k=0; k<=20; k++){ //세번째 선 좌표 고르고

                bool success = true;

                // x x x
                for(int h=0; h<n; h++){ // 점들 순회하면서 검사
                    if(x[h] == i || x[h] ==j || x[h]==k) continue;
                    success = false; 
                }
                if(success) ret =1;
                
                success = true;
                // x x y
                for(int h=0; h<n; h++){ // 점들 순회하면서 검사
                    if(x[h] == i || x[h] ==j || y[h]==k) continue;
                    success = false; 
                }
                if(success) ret =1;

                success = true;
                // x y y
                for(int h=0; h<n; h++){ // 점들 순회하면서 검사
                    if(x[h] == i || y[h] ==j || y[h]==k) continue;
                    success = false; 
                }
                if(success) ret =1;

                success = true;
                // y y y
                for(int h=0; h<n; h++){ // 점들 순회하면서 검사
                    if(y[h] == i || y[h] ==j || y[h]==k) continue;
                    success = false; 
                }
                if(success) ret =1;
                
            }
           
        }
        
    }

    cout << ret;



    return 0;
}