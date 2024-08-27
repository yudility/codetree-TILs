#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, ret, a[100][2];

int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i][0] >> a[i][1];
    }


    for(int i=0; i<n; i++){
        for(int j=i+1; j <n; j++){
            for(int k=j+1; k<n; k++){

                if(a[i][0] !=a[j][0] && a[i][0]!=a[k][0] && a[j][0]!=a[k][0]) continue;
                if(a[i][1] !=a[j][1] && a[i][1]!=a[k][1] && a[j][1]!=a[k][1]) continue;

                int min_x=10000, min_y=10000,max_x=-10000, max_y=-10000;
                
                min_x=min(a[i][0], min(a[j][0],a[k][0]));
                min_y=min(a[i][1], min(a[j][1],a[k][1]));
                max_x=max(a[i][0], max(a[j][0],a[k][0]));
                max_y=max(a[i][0], max(a[j][1],a[k][1]));

                ret=max(ret, (max_x - min_x)*(max_y - min_y));
            }
        }
    }
    
    cout << ret;
    return 0;
}