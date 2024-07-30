#include <stdio.h>

void *ReplaceCharacter(char str[], int n, char ch1, char ch2){
    for(int i =0 ;i < n;i++ ){
        if(str[i] == ch1 ){
            str[i] = ch2 ;
        }else if(str[i] == ch2){
            str[i] = ch1;
        }
    }
    return str;
}


int main() {
      char str[100];
     fgets(str, sizeof(str), stdin);
     int n =0;
     while (str[n]!='\0'){
         n++;
     }
     char ch1,ch2;
     scanf(" %c",&ch1);
     scanf(" %c",&ch2);
    printf("%s\n", ReplaceCharacter(str,n,ch1,ch2));

    return 0;

    return 0;
}
