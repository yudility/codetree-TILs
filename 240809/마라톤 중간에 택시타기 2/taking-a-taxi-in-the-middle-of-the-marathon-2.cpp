#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int n, ret=987654321;
vector<pair<int, int>> c;

int main() {

    //조건
    // 1, N번째 체크포인트는 건너뛰지 않음
    // 그 외에는 체크포인트 하나 골라서 마라톤 완주하는 최소 택시 거리 구하기

    cin >> n;

    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;

        c.push_back({x, y});
    }

    
    // 같은 위치의 체크포인트가 주어지면 그 체크포인트는 반드시 건너 뜀!
    //--> 이 경우 남은 쳌포는 건너뛰지 않고 택시거리만 구하기

    for(int i=1; i<c.size()-1; i++){ // 양쪽 빼고 건너 뛸 체크포인트 고르기
        int skip = i;
        pair<int, int> prev = {c[0].first, c[0].second};

        int dist =0;

        for(int j=1; j<c.size(); j++){ 
            if(j==skip){
                continue;
            }

            dist += (abs(c[j].first-prev.first) + abs(c[j].second-prev.second));

            prev = {c[j].first, c[j].second};
        }

        ret = min(ret, dist);
    }

    cout << ret;

    return 0;
}