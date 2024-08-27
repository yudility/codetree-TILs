#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, b, ret, p, s;
vector<pair<int, int>> v;

int main() {
    
    cin >> n >> b;

    for(int i=0; i< n; i++){
        cin >> p >> s;
        v.push_back({p, s});
    }

    //정렬
    sort(v.begin(), v.end());

    //반값으로 정할 선물 하나 정하고
    //그 후, 최대 몇 명에게 선물을 줄 수 있는지 구하기
    
    //반값으로 할 선물 정하기
    for(int i=0; i<n; i++){
        int money=0;
        int cnt=0;
        
        p=v[i].first;
        s=v[i].second;

        money+=(p/2 + s);
        cnt++; 

        if(money==b){ 
            ret=max(ret, cnt);
            continue;
        }
        else if(money>b) continue;

        for(int j=0; j<n; j++){
            if(j==i) continue;

            p=v[i].first;
            s=v[i].second;

            money+=( p + s );

            if(money<=b){
                cnt++;
            }
            else{
                ret=max(ret, cnt);
                break;
            }

        }
    }


    cout << ret;

    return 0;
}