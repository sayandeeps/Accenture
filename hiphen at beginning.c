#include <stdio.h>

char* MoveHyphen(char str[], int n) {
    int idx=n-1;
   for(int i =n-1 ;i>=0;i--){
       if(str[i]!='-'){
           str[idx--]=str[i];
       }
   }
   while(idx>=0){
       str[idx--]='-';
   }
   return str;
}

int main() {
    char str[] = "String-Compare";
    int n = sizeof(str) / sizeof(str[0]) - 1; 
    printf("Original string: %s\n", str);
    char* result = MoveHyphen(str, n);
    printf("String after shifting hyphens: %s\n", result);

    return 0;
}
