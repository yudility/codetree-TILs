#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int x;

int main() {

    cin >> x;

    int v=1;
    int left_dist=x;
    int time=0;

    while(true){
        left_dist-=v;
        time++; 

        if(left_dist==0){
            break;
        }

        if(left_dist>=((v+1)*(v+2))/2){
            v++;
        }
        else if(left_dist >=(v*(v+1))/2 ){
            continue;
        }else{
            v--;
        }

    }
  


    cout << time;


    // 5m  +1 -1  0 
    // 1  -> 1
    // 2  -> 3
    // 1  -> 4
    // 1  -> 5


    // 6m  +1 0 -1
    // 1 -> 1
    // 2 -> 3
    // 2 -> 5
    // 1 -> 6
    
    // 7m  +1 0 -1 0
    // 1 -> 1
    // 2 -> 3
    // 2 -> 5 
    // 1 -> 6
    // 1 -> 7


    // 8m  +1 0 0 -1
    // 1 -> 1
    // 2 -> 3
    // 2 -> 5
    // 2 -> 7
    // 1 -> 8

    //9m +1 +1 -1 -1
    // 1 -> 1
    // 2 -> 3
    // 3 -> 6
    // 2 -> 8
    // 1 -> 9


    //10m  +1 +1 -1 -1 0
    // 1-> 1
    // 2-> 3
    // 3 -> 6
    // 2 -> 8
    // 1 -> 9
    // 1 -> 10

    //11m  +1 +1 -1 0 -1 
    // 1 -> 1
    // 2-> 3
    // 3 -> 6
    // 2 -> 8
    // 2 -> 10
    // 1 -> 11

    //12m  +1 +1 0 -1 -1
    // 1 -> 1
    // 2-> 3
    // 3 -> 6
    // 3 -> 9
    // 2 -> 11
    // 1 -> 12 

    //15m  
    // 1 -> 1
    // 2-> 3
    // 3 -> 6
    // 4 -> 10
    //  -> 11
    // 1 -> 12 


    
    return 0;
}