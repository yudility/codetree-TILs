#include <iostream>
using namespace std;

int n;

int main() {

    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << i << " * " << j << " = " << j*i << " ";
            if( j<n-i+1){
                cout << "/ ";
            }
        }
        cout << "\n";
    }
    
    return 0;
}