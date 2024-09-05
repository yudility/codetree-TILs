#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, ret;
string str;


int main() {

    cin >> n;
    cin >> str;

    for(int i=1; i<n; i++){ //i가 길이

        bool t = false; //두번 나오는지 검사

        for(int j=0; j<=n-i; j++){ // j부터 i까지의 길이 문자열 검사할 것
            for(int k= j+1; k<n-i; k++){ //k부터 i길이의 부분 문자열이 완전 같을 경우 true
                bool issame = true;

                for(int l=0; l< i; l++){//i 길이 만큼 검사 시작
                    if(str[j+l] != str[k+l]){
                        issame = false;
                    }
                }
                if(issame) t=true;
            }
        }
        if(t) ret = i+1;
        else break;
    
    }

    cout << ret+1;

    
    return 0;
}