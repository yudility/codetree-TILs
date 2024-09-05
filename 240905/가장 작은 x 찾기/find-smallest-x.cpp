#include <iostream>
using namespace std;

int n, a[11], b[11];

int main() {

    cin >> n;
    for(int i=0; i<n; i++){ 
        cin >> a[i] >> b[i];
    }

    for(int i=1; i<10000; i++){ //x의 후보
        int x=i;
        bool find=true;
        for(int j=0; j<n; j++){
            x*=2;
            if(a[j] > x || x > b[j]){
                find=false;
                break;
            }
        }
        if(find){
            cout << i;
            break;
        }
    }

    return 0;
}