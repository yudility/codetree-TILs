#include <iostream>
using namespace std;

int n, a[102], ret;

int main() {
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        int sum =0;
        sum+=a[i];
        for(int j=0; j<n; j++){
            if( i==j || i-1==j || i+1 == j) continue;
            sum+=a[j];
            ret= max(ret, sum);
            sum-=a[j];
        }
    }

    cout << ret;


    return 0;
}