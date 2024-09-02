#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int t, a, b, pos[100], ret;
char c[100];

int main() {

    cin >> t >> a >> b;

    for(int i=0; i < t ; i++){
        cin >> c[i] >> pos[i];
    }

    //특정 위치 x = k로부터 가장 가까이에 있는 알파벳 S까지의 거리 d1이 
    //x = k로부터 가장 가까이에 있는 알파벳 N까지의 거리 d2보다 같거나 작은 경우
    //x = k는 특별한 위치

    //x = a부터 x = b까지의 위치 중 특별한 위치의 수를 구하는 프로그램

    for(int i=a; i<=b; i++){
        //1. x에서 가장 가까이있는 알파벳 s 위치 구하기 -> 거리값 중 min값 d1
        //2. x에서 가장 가까이 있는 알파벳 n 위치 구하기 -> 거리값 중 min 값 d2 
        //3. if - d1 <= d2 이면 cnt++;
        int d1=987654321;
        int d2=987654321;

        for(int j=0; j<t; j++){
            if(c[j]=='S'){
                d1=min(d1, abs(pos[j]-i));
            }
            else if(c[j]=='N'){
                d2=min(d2, abs(pos[j]-i));
            }
        }
        if(d1 <= d2 ) ret++;

    }


    cout << ret;
    
    return 0;
}