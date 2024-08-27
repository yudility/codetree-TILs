#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a[5], ret=987654321;
bool flag=true;

int Get_diff(int x, int y, int z){

    int sum1 = a[x]+a[y];
    int sum2 = a[z];
    int sum3 = 0;

    for(int i=0; i<5; i++){
        if(i==x || i==y || i==z) continue;
        sum3+=a[i];
    }

    if(sum3==sum2 || sum3==sum1 || sum1==sum2 ) return -1;
    else{
        int max_t = max(sum1, max(sum2, sum3));
        int min_t = min(sum1, min(sum2, sum3));

        return max_t-min_t;
    } 

}

int main() {

    for(int i=0; i<5; i++){
        cin >> a[i];
    }

    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            for(int k=0; k<5; k++){
                if(k==i || k==j) continue;
                int temp = Get_diff(i,j,k);

                if(temp==-1){
                    continue;
                }
                else{
                    flag=false;
                    ret=min(ret,temp);
                }
            }
        }
    }
    if(flag) cout <<-1;
    else cout << ret;

    return 0;
}