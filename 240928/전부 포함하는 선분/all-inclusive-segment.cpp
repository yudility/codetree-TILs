#include <iostream>
using namespace std;

int lines[100][2], n, ret=101;

int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> lines[i][0] >> lines[i][1];
        
    }


    for(int i=0; i<n; i++){ //제거할 선분 정하기
        int x1=100, x2=0;
        for(int j=0; j<n; j++){ //x1, x2 구하기
            if(i==j) continue;
            
            x1=min(x1, lines[j][0]);
            x2=max(x2, lines[j][1]);
        }
        ret=min(x2-x1, ret);

    }

    cout << ret;

    return 0;
}