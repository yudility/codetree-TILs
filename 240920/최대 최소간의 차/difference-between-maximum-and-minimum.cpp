#include <iostream>
using namespace std;

const int MAX_COST = 987654321; 
int n, k, a[101], ret=MAX_COST;
int min_n=100000, max_n;

int main() {
    
    cin >> n >> k;

    for(int i=0; i<n; i++){
        cin >> a[i];
        min_n = min(a[i], min_n);
        max_n = max(a[i], max_n);
    }

    for(int s=min_n; s<=max_n; s++){ // 기준 s
        int total_cost=0;
        for(int i=0; i<n; i++){
            int diff=abs(a[i]-s);

            if(diff<=k && a[i]>=s) continue;

            if(a[i]<s) total_cost+=diff;
            else if(diff>k){
                total_cost+=(diff-k);
            }
        }
        ret=min(ret, total_cost);
    }

    cout << ret; 

    return 0;
}