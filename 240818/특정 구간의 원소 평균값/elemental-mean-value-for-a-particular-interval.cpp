#include <iostream>
using namespace std;

int n, a[101], ret;

int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        int cnt=0;
        for(int j=i; j<n; j++){
            int av, sum=0;
            for(int k=i; k<=j; k++){
                sum+=a[k];
                cnt++;
            }
            av=sum/cnt;
            for(int k=i; k<=j; k++){
                if(a[k]==av) ret++;
            }
        }
    }
    
    cout << ret;

    return 0;
}