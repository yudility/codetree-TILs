#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a[100], b[100];

int main() {

    cin >>n;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }

    int cnt=0;
    
    for(int i=0; i<n; i++){
        if(a[i]>b[i]){
            int movingPeople=a[i]-b[i];
            for(int j=i+1; j<n; j++){
                if(a[j]<b[j] && (movingPeople+a[j])<=b[j]  ){
                    a[j]=a[j]+movingPeople;
                    cnt+=(movingPeople*(j-i));
                    break;
                }else if(a[j]<b[j]&& (movingPeople+a[j])>b[j] ){
                    a[i+1]=a[j]+movingPeople-b[j]; //남은 인원 옆으로 보내기
                    a[j]=b[j];
                    cnt+=(movingPeople*(j-i));
                    break;
                }
            }
        }
    }
    
    cout << cnt;

    return 0;
}