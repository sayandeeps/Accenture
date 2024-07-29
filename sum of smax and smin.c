#include <stdio.h>
#include <stdlib.h>

int LargeSmallSum(int arr[],int n){
    int max=arr[0],smax=arr[0];
    int min=arr[1],smin=arr[1];
    // int n =sizeof(arr)/sizeof(arr[0]);

   for(int i =0;i<n;i+=2){
    //   printf("%d ",arr[i]);
       if(arr[i]>max){
            smax=max;
           max=arr[i];


       }else if(max>arr[i] && arr[i]!=smax){
           smax=arr[i];

       }
   }
      for(int i =1;i<n;i+=2){
            //  printf("%d ",arr[i]);

       if(arr[i]<min){
           smin=min;
            min=arr[i];

       }else if(min<arr[i] && arr[i]!=smin){
           smin=arr[i];
       }
   }
   return smin+smax;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // int m;
    // scanf("%d",&m);
    // int diff;
    // scanf("%d",&diff);
    printf("%d",LargeSmallSum(arr,n));
}
