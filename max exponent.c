#include <stdio.h>
int count(int a){
    int c =0;
    while(a%2==0 && a!=0 ){
        c++;
        a/=2;
    }
    return c;
}
int MaxExponents (int a , int b){
    int max = 0,num =0;
   for(int i =a;i<b;i++){
       if(count(i)>max){
           max = count(i);
           num = i;
       }
   }
   return num;
}


int main() {
     int a,b;
     scanf("%d%d",&a,&b);
     printf("%d",MaxExponents(a,b));

    return 0;
}
