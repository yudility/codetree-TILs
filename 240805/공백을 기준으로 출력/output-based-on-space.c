#include <stdio.h>
#include <string.h>

int main() {

    char str1[100], str2[100];

    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);

    int len1=strlen(str1), len2=strlen(str2);

    for(int i=0; i<len1-1; i++){
        if(str1[i]!=' ')printf("%c", str1[i]);
    }
    for(int i=0; i<len2; i++){
        if(str2[i]!=' ')printf("%c", str2[i]);
    }

    return 0;
}