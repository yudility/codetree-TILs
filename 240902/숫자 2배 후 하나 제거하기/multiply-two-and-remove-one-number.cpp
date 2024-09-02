#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a[100], ret=987654321;

int main() {
    
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    //숫자 하나골라서 2배하기
    for(int i=0; i<n; i++){ 
        a[i]*=2;
        vector<int> v;
        //하나 골라서 제외하기
        for(int j=0; j<n; j++){
            //제외한 원소 빼고 다 담기
            for(int k=0; k<n; k++){
                if(k==j) continue;
                v.push_back(a[k]);
            }
            
            int sum=0;
            for(int k=0; k<v.size()-1; k++){
                sum+= abs(v[k]-v[k+1]);
            }
            ret=min(ret, sum);
        }
        //원복
        a[i]/=2;
    }

    cout << ret; 

    return 0;
}