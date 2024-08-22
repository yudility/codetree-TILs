#include <iostream>
using namespace std;

int n, a[100], ret;

int main() {
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
                int sum=0, cnt=0;
                for(int k=i; k<=j; k++){
                    sum+=a[k];
                    cnt++;
                }
                int avg=sum/cnt;
                if(sum%cnt!=0) continue;
                for(int k=i;k<=j; k++){
                    if(a[k]==avg){
                        ret++;
                        break;
                    }
                }
                
            
        }
    }

    cout << ret;

    return 0;
}