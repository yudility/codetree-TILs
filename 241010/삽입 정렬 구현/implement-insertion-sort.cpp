#include <iostream>
using namespace std;

int n, a[100];

int main() {
    
    cin >> n;

    for(int i=0; i<n ; i++){
        cin >> a[i];
    }

    for(int i=0; i< n; i++){
        int key=a[i];
        int j=i-1;
        while (j>=0 && a[j] > key){
            a[j+1]=a[j];
            j--;
        }
        a[j]=key;
    }
    for(int i=0; i<n; i++)
      cout << a[i] << " ";

    return 0;
}