#include <stdio.h>
#include <stdlib.h>

int length(int n) {
    int len = 0;
    while (n!=0) {
        len++;
        n/=10;
    }
    return len;
}
char *DectoNBase(int n, int num){
    char *ans = (char *)malloc((100) * sizeof(char)) ;
    int j =0;
    while(num != 0){
        int a = num %n ;
        if(a>9){
            a+=55;
        }else{
            a+=48;
        }
         ans[j++]=(char)a;
        num/=n;
    }
    ans[j]='\0';
    int i =0 ;
    j=j-1;
    while(i<j){
       char c = ans[i];
       ans[i]=ans[j];
       ans[j]=c;
       i++;
       j--;
    }
    return ans;
}
int main(){
    int n;
    scanf("%d",&n);
    int num ;
    scanf("%d",&num);
    printf("%s",DectoNBase(n,num));
}
