// Online C compiler to run C program online
#include <stdio.h>

int length(int n) {
    int len = 0;
    while (n!=0) {
        len++;
        n/=10;
    }
    return len;
}

int NumberOfCarries(int num1 , int num2){
    int carry = 0;  
    int count = 0;  

    while (num1 != 0 || num2 != 0 || carry != 0) {
        int digit1 = num1 % 10;  
        int digit2 = num2 % 10;  
        int sum = digit1 + digit2 + carry;
        if (sum >= 9) {
            carry = 1;  
            count++;    
        } else {
            carry = 0;  
        }

        num1 /= 10;
        num2 /= 10;
    }
    return count;  
}

int main() {
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    printf("%d",NumberOfCarries(n1,n2));
}
