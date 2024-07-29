// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

char*MoveHyphen(char str[],int n){
   char ans[100];
    int c = 0, hcount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '-') {
            printf("%d ",n);
            ans[c++] = str[i];
        } else {
            hcount++;
        }
    }
    ans[c] = '\0';
    for (int i = 0; i < hcount; i++) {
        str[i] = '-';
    }
    for (int i = hcount, j = 0; ans[j] != '\0'; i++, j++) {
        str[i] = ans[j];
    }
    str[n] = '\0';
    return str;
}
int main() {
    char str[100];
    scanf("%[^/n]s",str);
    printf("%s",MoveHyphen(str,length(str)));
    return 0;
}
