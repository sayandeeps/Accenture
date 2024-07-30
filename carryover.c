#include <stdio.h>

int NumberOfCarries(int num1 , int num2) {
    int carry =0,count=0;
    while(num1!=0 && num2!=0){
        int a1 = num1%10;
        int a2 = num2%10;
        if(a1+a2 +carry >9){
            carry =1;
            count++;
        }else{
            carry =0 ;
        }
        num1/=10;
        num2/=10;
    }
    while(num1!=0){
        int a1 = num1%10;
      
        if(a1 +carry >9){
            carry =1;
            count++;
        }else{
            carry =0 ;
        }
        num1/=10;
    }
    while(num2!=0){
        int a1 = num2%10;
      
        if(a1 +carry >9){
            carry =1;
            count++;
        }else{
            carry =0 ;
        }
        num2/=10;
    }
    return count;
}

int main() {
    int num1=23;
    int num2=563;
  
    int result = NumberOfCarries(num1, num2);
    printf("%d\n", result);

    return 0;
}
