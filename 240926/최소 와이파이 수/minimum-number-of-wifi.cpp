#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, m, a[101], ret, start;

int main() {

    cin >> n >> m;

    for(int i=0; i< n; i++){
        cin >> a[i];
        if(start==-1 && a[i]==1) start=i;
    }

    if(start==-1){
        cout << 0;
        return 0;
    }

    int rest=m*2+1;
    ret++;
    for(int i=start+1; i<n; i++){
        rest--;

        if(rest<=0 && a[i]==0){
            continue;
        }
        else if(rest<=0 && a[i]==1){
            rest=m*2+1;
            ret++;
        }
    }

    cout << ret;

    return 0;
}