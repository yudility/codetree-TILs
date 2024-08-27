#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, b, ret, pi, si;

struct Student{
    int p;
    int s;
    int t;
};

vector<Student> v;

bool cmp(Student a, Student b){
    if( a.t == b.t){
        if(a.p == b.p) return a.s < b.s;
        return a.p < b.p;
    }
    return a.t < b.t;
}


int main() {
    
    cin >> n >> b;

    for(int i=0; i< n; i++){
        Student S;
        cin >> S.p >> S.s;
        S.t = S.p + S.s;
        v.push_back(S);
    }

    //정렬
    sort(v.begin(), v.end(), cmp);

    //반값으로 정할 선물 하나 정하고
    //그 후, 최대 몇 명에게 선물을 줄 수 있는지 구하기
    //문제는 배송비가 엄청 많이 나올수도 있다는 것.
    
    //반값으로 할 선물 정하기
    for(int i=0; i<n; i++){
        int money=0;
        int cnt=0;
        
        pi=v[i].p;
        si=v[i].s;

        money+=(pi/2 + si);
        cnt++; 

        if(money==b){ 
            ret=max(ret, cnt);
            continue;
        }
        else if(money>b) continue;

        for(int j=0; j<n; j++){
            if(j==i) continue;

            money+= v[j].t ;

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