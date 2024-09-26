#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a[10002], sum, avg,cnt;

int main() {
    
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
        sum+=a[i];
    }

    avg=sum/n;

    sort(a, a+n);

    for(int i=0; i<n; i++){
        if(a[i]<avg){
            for(int j=n-1; j>i; j--){
                while(a[j]>avg){
                    a[i]++;
                    a[j]--;
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}