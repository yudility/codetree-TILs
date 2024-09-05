#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, ret;
string str;

int main() {

    cin >> n;
    cin >> str;

    for(int i=0; i<n; i++){ //i는 사람을 넣을 자리
        int dis=n; //최소 거리

        if(str[i]=='0'){ 
            int prev;
            for(int j=0; j<n; j++){
                if(str[j]=='1'||j==i){
                    prev=j; //처음 1이 나온 위치 저장
                    break;
                }
            }
            for(int j=0; j<n; j++){ // 처음부터 돌면서 거리 계산
                if((j==i || str[j]=='1' )&& j!=prev) {
                    dis = min(dis,(j-prev));
                    prev=j;
                }
            }
            ret = max(ret, dis);
        }
    }

    cout << ret;

    return 0;
}