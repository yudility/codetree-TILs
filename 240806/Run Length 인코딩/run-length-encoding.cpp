#include <stdio.h>
#include <string.h>

int main() {

    char str[1001];
    char run_length[1001];

    scanf("%s", str);
    int n=strlen(str);
    int idx=0, cnt=1;

    for(int i=0; i<n; i++){
        if(str[i]==str[i+1]) {
            cnt++;
        }
        else if(str[i]!=str[i+1]){
            run_length[idx]=str[i];
            run_length[idx+1]=cnt+48;
            cnt=1;
            idx += 2;
        }
    }

    printf("%d\n%s", strlen(run_length), run_length);

    return 0;
}