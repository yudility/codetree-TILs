#include <iostream>
using namespace std;

int a[6],ret=987654321;


int Get_diff(int x, int y, int z){

    int sum1=0;
    int sum2= a[x]+a[y]+a[z];
    for(int i=0; i< 6 ; i++){
        if(i==x || i==y || i==z) continue;
        sum1+=a[i];
    }
    return abs(sum1-sum2);
}


int main() {

    for(int i=0; i < 6; i++) {
        cin >> a[i];
    }
    
    for(int i=0; i < 6; i++){
        for(int j=i+1;  j < 6; j++){
            for(int k=j+1; k < 6; k++){
                ret = min(ret, Get_diff(i, j, k));
            }
        }
    }


    cout << ret ;
    
    
    return 0;
}