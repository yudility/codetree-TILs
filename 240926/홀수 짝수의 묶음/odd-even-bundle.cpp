#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a[1001], odd, even, cnt;

int main() {

    cin >> n; 
    
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]%2==0) even++;
        else odd++;
    }



    bool isEven=true; // 1이면 짝수차례, 0이면 홀수 차례
    while( odd >=0 || even >=0){
        if(isEven){
            if(even>=1){
                even--;
                cnt++;
            }
            else if(odd>=2){
                odd-=2;
                cnt++;
            }
            else if(odd==1){
                odd--;
                cnt-=1;
            }
            isEven=false;
        }
        else{
            if(odd>0){
                odd--;
                cnt++;
                isEven=true;
            }
            else{
                break;
            }
        }
    }

    cout << cnt;

    return 0;
}